#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>

using namespace std;
const int SIZE_TEST = 3;
const int SIZE_STUDENT = 100;

// write the definition of class Student, sturct fullName, struct Date here
// Note: what will be the order of these 3 components?
// **** your code goes here ****
struct fullName {
   string firstName;
   string mInitial;
   string lastName;
};

struct date {
   int year;
   int month;
   int day;
};

class Student {
private:
   fullName myName;
   date myBirthDay;
   int tests[SIZE_TEST];
   double avg;

public:
   Student();
   void setStudent(string first, string middle, string last);
   fullName getStudent();
   date getBirthday();
   double getAverage();
   void computeAverage();
   void printStudent();
};

// fucntion prototypes go here
int getData(Student[], int);
void printData(Student[], int);
void printDataReversedOrder(Student[], int);
void printBest(Student[], int);
void printFeb(Student[], int);
void printByMonth(Student[], int);

int main () {
   srand(time(0));	 // put the seed for random number generator
   Student csc260Students[SIZE_STUDENT];
  
   // Write a state ment to invoke the getData function
   // Remeber that getData will return a student count back
   // You will need to declare a variable to recieve this return value
   // **** write you statement here ****
   int count = getData(csc260Students, SIZE_STUDENT);


   // write two statements to print the label and call printData
   // **** write you statements here
   cout << "\n**** Students Data ****\n";
   printData(csc260Students, count);

  
   // write two statements to print the reversed label and call printDataReversedOrder
   // **** write your statements here
   cout << "\n**** Students Data Reversed ****\n";
   printDataReversedOrder(csc260Students, count);

   printBest(csc260Students, count);


   printFeb(csc260Students, count);


   printByMonth(csc260Students, count);


   return 0;
}

int getData(Student classStu[], int size)  {
   int stuCount = 0;
   fullName oneName;
   ifstream inFile ("studentsSP25.txt");
   if (!inFile.is_open())   {
      cout << "Unable to open file"; 
      return -1;
   }

   while (inFile >> oneName.lastName) {
      inFile >> oneName.firstName;
      inFile >> oneName.mInitial;
      classStu[stuCount].setStudent(oneName.firstName, oneName.mInitial, oneName.lastName);
      stuCount++;
   } 
   inFile.close();
   return stuCount;
}


//Print the regular order of the array
void printData(Student classStu[], int size){
   cout << "" << endl;
   for (int i = 0; i < size; i++) {
      classStu[i].printStudent();
   }
}

// Prints the reverse order of the  array
void printDataReversedOrder(Student classStu[], int size){
   for (int i = size - 1; i >= 0; --i) {
      classStu[i].printStudent();
  }
}


//Print the student with the best Average
void printBest(Student classStu[], int size) {
   if (size == 0) {
       cout << "No students to evaluate.\n";
       return;
   }

   int bestIndex = 0;
   double bestAvg = classStu[0].getAverage();

   for (int i = 1; i < size; i++) {
       if (classStu[i].getAverage() > bestAvg) {
           bestAvg = classStu[i].getAverage();
           bestIndex = i;
       }
   }

   cout << "\n THE ACADEMIC CHAMPION \n";
   classStu[bestIndex].printStudent();
}


//Prints all studens born in Feb.
void printFeb(Student classStu[], int size) {
   cout << "\n February-Born Scholars \n";
   bool found = false;
   for (int i = 0; i < size; i++) {
       if (classStu[i].getBirthday().month == 2) {
           classStu[i].printStudent();
           found = true;
       }
   }
   if (!found)
       cout << "None born in February.\n";
}


// prints the student grouped by their month of birth
void printByMonth(Student classStu[], int size) {
   cout << "\n Students Grouped by Birth Month \n";
   for (int month = 1; month <= 12; month++) {
       bool hasAny = false;
       cout << "\n-- Month " << month << " --\n";
       for (int i = 0; i < size; i++) {
           if (classStu[i].getBirthday().month == month) {
               classStu[i].printStudent();
               hasAny = true;
           }
       }
       if (!hasAny)
           cout << "No students born in this month.\n";
   }
}

Student::Student()  {	// this is a constructor which set all to null and 0
   myName.firstName = "";
   myName.mInitial = ' ';
   myName.lastName = "";
   myBirthDay.year = 0;
   myBirthDay.month = 0;
   myBirthDay.day = 0;
   for (int i = 0; i < SIZE_TEST; ++i) {
      tests[i] = 0;
  }
   avg = 0.0;
}

void Student::setStudent(string first, string middle, string last) {
   myName.firstName = first;
   myName.mInitial = middle[0];
   myName.lastName = last;

   myBirthDay.year = rand() % 10 + 1995;
   myBirthDay.month = rand() % 12 + 1;
   myBirthDay.day = rand() % 28 + 1;

   for (int i = 0; i < SIZE_TEST; ++i) {
      tests[i] = rand() % 51 + 50; // 50 to 100
  }
   computeAverage();
}
     
fullName Student::getStudent() {
   return myName;

}

date Student::getBirthday() {
   return myBirthDay;

}

double Student::getAverage() {
   return avg;

}    

void Student::computeAverage() {
   int sum = 0;
   for (int i = 0; i < SIZE_TEST; i++)
   sum += tests[i];
   avg = double(sum) / SIZE_TEST;
}
   
void Student::printStudent() {
   cout.setf(ios::left);  //align left
   cout << setw(10) << myName.firstName 
        << setw(3) << myName.mInitial
        << setw(15) << myName.lastName;
   cout << myBirthDay.month << "/" 
        << myBirthDay.day << "/" 
        << myBirthDay.year << "\t";
   for (int k = 0; k < SIZE_TEST; k++) 
      cout << setw(5) << tests[k]; 
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);   
   cout << setprecision(2) << "Average =  " << avg << endl;  		
}



/*






*/ 