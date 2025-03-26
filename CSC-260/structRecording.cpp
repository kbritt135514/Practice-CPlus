/*
   1. Finish this program and save the file as: recordingFirstnameLastname.cpp
      - recording is the song recording. Please give the reasonal cost when enter
        data.
   2. Upload both your cpp file and the outputfile. The output file must be named
   as outRecordingFirstnameLastname.txt
   3. Write the normal opening comments to this program
   4. Copy/Paste a sample output at the end of this program
*/
#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 5;

struct  recording  { 
   string title;
	string artist;
	double cost;
	int quantity; 
}; 

// function prototypes
void loadData(recording[], int);
void printRecording(recording[], int);
void writeData(recording[], int);

int main() {

   recording recordingCollection[SIZE];

   loadData(recordingCollection, SIZE);

   printRecording(recordingCollection, SIZE);

   writeData(myRecoding, SIZE);
   
	return 0;
}

void loadData(recording listOfRecording[], int listLen) {
}
void printRecording(recording listOfRecording[], int listLen) {
}
void writeData(recording listOfRecording[], int listLen) {
}
/*
  output format:
  My personal recording list:
  Title							Artist			Cost			Quantity

*/
