//*************************************************************
//File name: "C:\Users\k.britt135514.CS\OneDrive - Norfolk State University\CSC-260\searchString.cpp"
//Name: Keanu Britt 0615507
//Date: 02/012/2025
//Class: CSC-260L-SEC1
//
//
// ...Save your file as searchStringFirstNameLastName.cpp and delete this line
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
//       easier to read
// *** task 1: change the program so that it will use dictionary1.txt as 
//             the input data file. Be sure the size of the dictionary is 
//             at least 200. Run the program until Error free.
// *** task 2: change the program so that it will prompt the user to enter
//             the search string (one word) and print the result. Test the
//             program with different search string until error free.
// *** task 3: add a function that will print out all words that starting with a vowel letter.
//             The program will then print out the total number of words starting with vowel.
//
// Notes for the instructor:
// This program demonstrate
// 1. How to pass an array to a function along with its size
// 2. How to return an boolean value from a function
// 3. How to traverse and array (both in print and search functions)
// 4. why passing the length of the array is very important
//
//*************************************************************

#include <iostream>
#include <string>
#include <fstream>

using namespace std;



const int SIZE = 200;

//function prototypes
bool findStr(string[], int, string);
int getData(ifstream&, string[], int);
void printDictionary(string[], int);
void printData(string[], int);
void printVowel(string[], int);

int main() {

   //initialization of variables and array
   ifstream infile;
   int realSize = 0;
   string dict[SIZE];
   

   realSize = getData(infile, dict, SIZE); // return the actual size of the array.
   printDictionary(dict, realSize); // print the dictionary

   cout << endl;

   printVowel(dict, realSize); //print the word beginning with vowels and how many

   cout << endl;

	string inStr;
   cout << "Please enter a search String inquiry: "<<endl; // Reads user input inorder to search array
   cin >> inStr;


	bool found = findStr(dict, realSize, inStr); // compares to see if input matches any word in the array
   if (found)
      cout << endl << "***" << "String:" << inStr << " iS in the given dictionary" << endl;
   else
      cout << endl << "&&&" << "String:" << inStr << " iS NOT in the given dictionary" << endl;



   // find out if the given string is the first word in the dictionary
   found = findStr(dict, 1, inStr);
   if (found)
      cout << endl << "String:" << inStr << " iS the 1st word in the dictionary" << endl;
   else
      cout << endl << "String:" << inStr << " iS NOT the 1st word in the dictionary" << endl;


   cout << "The first two words in the array are: " <<endl; // prints the first two words in the array.
   for (int i = 0; i < 2; i++){
      cout << dict[i]<<endl;
   }


    return 0;
}






//    1. Name: findStr
//      parameters including:
//       . -name: strArray; datatype: array of string; call by ref
//       . -name: lenArray; datatype: int: passed by value
//       . -name: inStr; datatype: string; passed by value
//       
//    2.  -return type: bool
// 
//    3. list all variable names which are local to this function
//    - strArray[]
//    - lenArray
//    - inStr
bool findStr(string strArray[], int lenArray, string inStr) {
   for (int i = 0; i < lenArray; i++){
     if (strArray[i] == inStr) //checks if input matches any words within the array
        return true;
   }
   return false;
}



//    1. Name: getData
//      parameters including:
//       . -name: inS; datatype: array of string; call by ref
//       . -name: size; datatype: int: passed by value
//       
//       
//    2.  -return type: int
// 
//    3. list all variable names which are local to this function
//    - inS[]
//    - size
//    - i
//    - inData
int getData(ifstream& inData, string inS[], int size) {
	int indx = 0; //index location withing array
   int datacount = 0;

    inData.open("dictionary1.txt"); //open files to read data


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




//    1. Name: printDictionary
//      parameters including:
//       . -name: s; datatype: array of string; call by ref
//       . -name: len; datatype: int: passed by value
//       
//    2.  -return type: void
// 
//    3. list all variable names which are local to this function
//    - s[]
//    - len
//    - i
void printDictionary(string s[], int len) {
	cout << "======== Dictionary =======" << endl;
	for (int i = 0; i < len; i++) {
		cout << s[i] << endl;
	}
	cout << "====== End of Dictionary =======" << endl;
}

//    1. Name: printVowel
//      parameters including:
//       . -name: s; datatype: array of string; call by ref
//       . -name: len; datatype: int: passed by value
//       
//    2.  -return type: void
// 
//    3. list all variable names which are local to this function
//    - s[]
//    - len
//    - i
//    - vowelCount
//    - firstChar
void printVowel(string s[], int len) {

   cout << "All words that start with a vowels: "<<endl;
   int vowelCount = 0;
    for (int i = 0; i < len; ++i) {
        char firstChar = tolower(s[i][0]); // Convert to lowercase
        if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u' || firstChar == 'A'|| firstChar == 'E' || firstChar == 'I' || firstChar == 'O' || firstChar == 'U') {// checks if any words in the array start with Vowels
            cout << s[i] << endl; 
            vowelCount++;
        }
    }

    cout << "Out of " << len << " words. There are a total of " << vowelCount << " words the begin with a vowel."<<endl; //print numerical results
}
