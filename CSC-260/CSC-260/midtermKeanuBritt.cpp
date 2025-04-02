//File name: "C:\Users\k.britt135514.CS\OneDrive - Norfolk State University\CSC-260\midtermKeanuBritt.cpp"
//Name: Keanu Britt 0615507
//Date: 03/12/2025
//Class: CSC-260L-SEC1
/*Program Description: This program takes in a user inputted array size and dynamically allocates spaces with the size entered. 
The array is then populated with randomly generated integers from -200 to 199. The program then prints those elements and calculates the sum using pointer arithmetic, and compute the average. 
It finally displays the results of the sum and average of the array elements
*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;



void loadArray(int*, int);
void printArray(int*, int);
void calculateSum(int*, int, int&);
double calculateAverage(int*, int);


int main() {
   int arySize, sum;
   int *arrayKBritt;

   cout << "Enter the size of the array: " <<endl;
   cin >> arySize;


   arrayKBritt = new int[arySize];
   loadArray(arrayKBritt, arySize);
   printArray(arrayKBritt, arySize);


   calculateSum(arrayKBritt, arySize, sum);
   double average = calculateAverage(arrayKBritt, arySize);


   cout << "Sum of the array elements: " << sum << endl;
   cout << "Average of the array elements: "<< average << endl;


   return 0;
}


void loadArray(int* arr, int size){

   srand(time(0));

   for (int i = 0; i < size; i++) {
       *(arr + i) = (rand() % 400) - 200;  
   }

}

void printArray(int* arr, int size){
   for (int i = 0; i < size; i++) {
      cout << *(arr + i) << "   ";  
  }
  cout << endl;
}

void calculateSum( int* arr, int size, int& sum){
   sum = 0;
   for (int i = 0; i < size; i++) {
       sum += *(arr + i);
   }
}

double calculateAverage(int* arr, int size) {
   if (size == 0) return 0.0; 

   int sum;  
   calculateSum(arr, size, sum);  
   return static_cast<double>(sum) / size;
}





/*
Enter the size of the array:
50
102   82   -108   139   84   128   -136   -83   181   195   -139   170   -19   182   -109   162   -42   98   -96   -46   61   152   191   181   -81   -145   -170   -53   -130   14   178   -182   -39   -36   110   82   170   -186   116   -139   -31   113   35   135   162   17   50   50   138   41
Sum of the array elements: 1549
Average of the array elements: 30.98

--------------------------------
Process exited after 1.267 seconds with return value 0
Press any key to continue . . .

*/

