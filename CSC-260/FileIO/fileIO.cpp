//*************************************************************
// ...Insert here your normal comments (stdent name, file path, date etc) here
//
// ...Save your file as fileIOFirstNameLastName.cpp and delete this line
//
// ...In each function add the following information as comments
//    a. function Name
//    b. parameters including 
//       . data type
//       . parameter name
//       . is this parameter call-by-value? Explain.
//       . return data type
//    c. list all variable names which are local to this function
//    d. list all variable names that the values of them will be 
//       passed back to the caller
//    e. add as many comments as needed to each line to make the program
//       easier to understand
// ... finish the printData function which will print the array (correct the 
//     caller so that will print the entire array
//      
// Notes for the instructor:
// This program demostrate
// 1. How to pass fstream as a reference parameter
// 2. How to pass an array to a function along with its size
// 3. How to read data from a file
// 4. How to return an array from a function
// 5. How to print an array with a function call
//  
// Note: input file name : textin.txt. This file should be saved within
//       same directory with your source code.
//*************************************************************



//include directives for use of certain modules
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int SIZE = 500; //constant array Size variable


//Prototypes
int getData(ifstream&, string[], int);
void printData(string[], int);



int main() {
    char ch;
    ifstream infile;     
    string s[SIZE];
    int realSize = 0;
    

    // read data from infile
   realSize = getData(infile, s, SIZE);	

    // print the array out by passing the array to a print function
    printData(s, realSize);

    return 0;
}

int getData(ifstream& inData, string inS[], int size) {
	int indx = 0; //index location withing array
   int datacount = 0;

    inData.open("textin0.txt"); //open files to read data


    if (!inData) {                       
	   cout << "Cannot open the input file." << endl; //in the event the file fails to open
       exit(1);
    }	


    inData >> inS[indx++];               //place data from each line within file to a different index location within the array
    while (inData) {                //read data until there is no more left to read.
    datacount++;
        inData >> inS[indx++];                             
    }


//--------- end of optional part II
    inData.close(); 


    return datacount;                     
}

void printData(string s[], int length) {

   for (int i = 0; i < length; i++){
      cout << s[i] <<endl;
   }

}
