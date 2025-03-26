/*
   Author: [Your Name]
   Date: [Current Date]
   Program: Recording Collection Manager
   Description: This program collects a list of recordings from the user,
   stores them in a structured array, displays them in a formatted table,
   and writes them to an output file.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

struct recording {
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

    // Load data from user input
    loadData(recordingCollection, SIZE);

    // Print data to console
    printRecording(recordingCollection, SIZE);

    // Write data to output file
    writeData(recordingCollection, SIZE);

    cout << "Recording data saved to file successfully.\n";

    return 0;
}

// Function to load recording details from user
void loadData(recording listOfRecording[], int listLen) {
    cout << "Enter details for " << listLen << " recordings:\n";
    for (int i = 0; i < listLen; i++) {
        cout << "\nRecording #" << (i + 1) << ":\n";
        cout << "Title: ";
        getline(cin, listOfRecording[i].title);
        
        cout << "Artist: ";
        getline(cin, listOfRecording[i].artist);
        
        cout << "Cost: ";
        cin >> listOfRecording[i].cost;
        
        cout << "Quantity: ";
        cin >> listOfRecording[i].quantity;
        
        cin.ignore();  // To handle newline character after integer input
    }
}

// Function to display recording data in tabular format
void printRecording(recording listOfRecording[], int listLen) {
    cout << "\nMy Personal Recording List:\n";
    cout << left << setw(25) << "Title" 
         << setw(20) << "Artist" 
         << setw(10) << "Cost" 
         << setw(10) << "Quantity" << endl;
    
    cout << string(65, '-') << endl;

    for (int i = 0; i < listLen; i++) {
        cout << left << setw(25) << listOfRecording[i].title
             << setw(20) << listOfRecording[i].artist
             << setw(10) << fixed << setprecision(2) << listOfRecording[i].cost
             << setw(10) << listOfRecording[i].quantity << endl;
    }
}

// Function to write recording data to an output file
void writeData(recording listOfRecording[], int listLen) {
    ofstream outFile("outRecordingKeanuBritt.txt");

    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    outFile << "My Personal Recording List:\n";
    outFile << left << setw(25) << "Title"
            << setw(20) << "Artist"
            << setw(10) << "Cost"
            << setw(10) << "Quantity" << endl;
    
    outFile << string(65, '-') << endl;

    for (int i = 0; i < listLen; i++) {
        outFile << left << setw(25) << listOfRecording[i].title
                << setw(20) << listOfRecording[i].artist
                << setw(10) << fixed << setprecision(2) << listOfRecording[i].cost
                << setw(10) << listOfRecording[i].quantity << endl;
    }

    outFile.close();
}

/*
  Sample Output:

  Enter details for 5 recordings:

  Recording #1:
  Title: Song A
  Artist: Artist A
  Cost: 12.99
  Quantity: 5

  Recording #2:
  Title: Song B
  Artist: Artist B
  Cost: 9.99
  Quantity: 3

  Recording #3:
  Title: Song C
  Artist: Artist C
  Cost: 15.50
  Quantity: 2

  Recording #4:
  Title: Song D
  Artist: Artist D
  Cost: 8.75
  Quantity: 7

  Recording #5:
  Title: Song E
  Artist: Artist E
  Cost: 11.25
  Quantity: 4

  My Personal Recording List:
  Title                     Artist              Cost      Quantity
  -------------------------------------------------------------
  Song A                    Artist A            12.99     5
  Song B                    Artist B            9.99      3
  Song C                    Artist C            15.50     2
  Song D                    Artist D            8.75      7
  Song E                    Artist E            11.25     5
*/

