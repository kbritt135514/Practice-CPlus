//File Name: C:\Users\k.britt135514.CS\OneDrive - Norfolk State University\CSC-260\arrayStuStruct_KBritt.cpp

//Author: Keanu Britt 0615507
//Course: CSC-260-01 16900
//Date: 02/26/2025
//Program Description: This program is for creating a struct for students and simulating random results and printing them in a readable format.
//File Name: arrayStuStruct_KBritt.cpp
// This lab 
//    1. creates an array of student struct 
//    2. read in data from studentssp17.txt from function readData(...)
//    3. generate 3 rendom test grades for each student - assignGrade(...)
//    4. print the entire array - printStudents(...)
//    5. find a student with first name and last name - findStudent(...)
//    6. print your own record - printOneStudent(...)
//    6. find and print the best student(s)- findBest(...)

#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

int const SIZE = 200;

// ==== create a student struct as instructed in the lab instruction
// *** your code goes here ***

struct student {
   string firstName;
   char middleInitial;
   string lastName;
   int testScore[3];
   double averageScore;
};

//prototypes
int readData(student[], int);
void printData(student[], int);
void assignGrade(student[], int);
void printOneStudent(student[], int);
int findStudent(student[], int, string, string);
void findBest(student[], int);


int main() {
   student stuArray[SIZE]; 	


   int stuCount, indxMe;


   stuCount = readData(stuArray, SIZE);	


   assignGrade(stuArray, stuCount);


   printData(stuArray, stuCount);


   indxMe = findStudent(stuArray, stuCount, "Keanu", "Britt");  // find yourself
   if (indxMe != -1) {
  	   cout << endl << "----- My Record: -----" << endl;
      printOneStudent(stuArray, indxMe);  
   }
   findBest(stuArray, stuCount);		// find and print the best student

   return 0;
} 

//This function reads the data
int readData(student anyArray[], int arrayLength) {
  // *** your code goes here

   int count = 0;
   ifstream inFile("studentssp17.txt");

   if (!inFile) {
      cout << "Unable to open file."<<endl;
      return 1;

   }
  
   while (count < arrayLength) {
      string first, last, middle;
      inFile >> first >> last; // Read first and last name

      if (!inFile) // Check if reading failed
          break;

      // Assume no middle initial, but check if another value exists
      if (last.length() == 1 && !inFile.eof()) {
          middle = last;  // Middle initial was read as last name
          inFile >> last; // Read last name correctly
      } else {
          middle = " ";  // No middle initial provided
      }

      // Assign values to struct
      anyArray[count].firstName = first;
      anyArray[count].middleInitial = middle[0]; // Store first char of middle
      anyArray[count].lastName = last;

      count++;
   }

   inFile.close();
   
   return count;

  
  
}

//This function prints the data
void printData(student anyStudentArray[], int arrayLength) {
   cout << endl << "*** Beginning of Student List ***" << endl;
   cout << fixed << showpoint << setprecision(2);
   for (int t = 0; t < arrayLength; t++) {
    // === write a statement to call printOneStudent with index t
    // *** your code goes here
      printOneStudent(anyStudentArray, t);

   }
   cout << "*** Ending of Student List ***" << endl;
}

	     
//This function assigns 3 randomly generated grade to each student and calculate ave
void assignGrade(student anyStudentArray[], int stuCount) {
  //*** write your code here 
   srand(time(0));

   for   (int i = 0; i < stuCount; i++) {
      int sum = 0;
      for (int j = 0; j < 3; j++) {
         anyStudentArray[i].testScore[j] = rand() % 101;
         sum += anyStudentArray[i].testScore[j];
      }
      anyStudentArray[i].averageScore = sum / 3.0;
      
      

   }
  
  
  
  
}

//This function finds the highest test score
void findBest(student anyStudentArray[], int stuCount) {
   int highestIndx = 0;
   
   for (int i = 1; i < stuCount; i++)
     if (anyStudentArray[i].averageScore > anyStudentArray[highestIndx].averageScore)
       highestIndx = i;
   cout << endl << "////////// The Best Student ///////" << endl;
   printOneStudent(anyStudentArray, highestIndx);
}

// This function find the index of the student with the given first and last name
int findStudent(student anyStudentArray[], int length, string fName, string lName) {
   for (int i = 0; i < length; i++) {
     if ((anyStudentArray[i].firstName == fName) && (anyStudentArray[i].lastName == lName))
        return i;
   }	
   cout << "--------- The student is not in the list -------------" << endl;
   return -1;
}

//This function prints one specific student at indx in the array
void printOneStudent(student anyStudentArray[], int indx) {
   cout.setf(ios::left);  //align left
   cout << setw(12) << anyStudentArray[indx].firstName 
        << setw(5) << anyStudentArray[indx].middleInitial
        << setw(12) << anyStudentArray[indx].lastName;
   for (int k = 0; k < 3; k++)
     cout << setw(5) << anyStudentArray[indx].testScore[k];
   cout << setw(6) << anyStudentArray[indx].averageScore << endl;       
   }
