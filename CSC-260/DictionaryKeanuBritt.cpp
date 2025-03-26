//*************************************************************
//File name: "C:\Users\k.britt135514.CS\OneDrive - Norfolk State University\CSC-260\searchString.cpp"
//Name: Keanu Britt 0615507
//Date: 02/013/2025
//Class: CSC-260L-SEC1

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int SIZE = 200;


int getData(ifstream&, string[], int);

void printVowel(string[], int);

void getVowels(string[], int);



int main() {

   //initialization of variables and array
   ifstream infile;
   int realSize = 0;
   string dict[SIZE];

   realSize = getData(infile, dict, SIZE);





   return 0;
}



















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



    inData.close(); 


    return datacount;                     
}







void getVowels(string s[], string a[],int len){

   int vowelCount = 0;
    for (int i = 0; i < len; ++i) {
        char firstChar = tolower(s[i][0]); // Convert to lowercase
        if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u' || firstChar == 'A'|| firstChar == 'E' || firstChar == 'I' || firstChar == 'O' || firstChar == 'U') {// checks if any words in the array start with Vowels
            cout << s[i] << endl; 
            vowelCount++;
        }
    }



}




void printVowel(string a[], int len) {

   cout << "All words that start with a vowels: "<<endl;
   int vowelCount = 0;
    for (int i = 0; i < len; ++i) {
        char firstChar = tolower(a[i][0]); // Convert to lowercase

    }

    cout << "Out of " << len << " words. There are a total of " << vowelCount << " words the begin with a vowel."<<endl; //print numerical results
}