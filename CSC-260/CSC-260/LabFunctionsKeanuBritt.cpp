//File name: "C:\Users\k.britt135514\OneDrive - Norfolk State University\CSC-260\LabFunctionsKeanuBritt.cpp"
//Name: Keanu Britt 0615507
//Date: 02/05/2025
//Class: CSC-260L-SEC1
//



/*
  this program will get two integers from the user. The program will then
  1. call getProduct(int, int, int &); where the first two arguments
     are the two input integers and third one is the product of these 2 
     integers.
  2. call printEvenAscending(int, int); where the two arguments are the 
     two input integers. This function will print all even numbers between
	  the two arguments in an ascending order. 
	  Note: the two input integers could be in any order (such as 34, 70 
	        or 90, 5). It is your job to check which argument is larger.
  3. call print5Rand(int, int); where the two arguments are the two input
     integers. The function will print 5 random numbers between the two 
	  areguments(inclusive). 
	  For example: pinrt5Rand(99, 21); will print 5 random integers between
	               21 and 99 (inclusively).
  You need complete printEvenAscending and print5Rand functions.
  
  Questions: (Please answer it in this comment section)
  q1. What is the purpose of the cin statements?
  Ans: Read the user's input for the variable
  q2. What is the purpose of the cout statements?  
  Ans: To print or output the data provided within the code line.
*/






#include <iostream> //for cin and cout statements
#include <time.h> //for random seed generation
#include <stdlib.h> //So the rand function can be used
using namespace std; //for use of std;


//Function prototypes
void GetProduct ( int A, int B, int & Product );
void printEvenAscending(int num1, int num2);
void swapFunction(int &num1, int &num2);
void print5Rand( int num1, int num2);



// Main function
int main() {
	int First, Second, prod; //intialize integer starter variables to hold user input and product
	
	cout << "Input two integers "; //prompt user for input
	cin >> First >> Second; // takin in user integer type input for First and Second variables 
	
	GetProduct(First, Second, prod ); //Function passes product of user input by reference to be printed later



   printEvenAscending(First, Second); // Prints the even numbers between the user's input given in ascending order
   


   print5Rand(First, Second); // Prints 5 random numbers inclusively between the user's input


	
	cout << "The product is: " << prod << endl; // Print the product value passed by reference earlier in the code
	return 0;
}

void swapFunction(int &num1, int &num2) // This function is called to swap the values from num1 to num2 and vice versa
{
   int temp;
   temp = num1;
   num1 = num2;
   num2 = temp; 

}

void GetProduct ( int A, int B, int & Product ) // Function multplies inputs and passes prodcut by reference
{
	Product = A * B;
   cout <<endl;
}

void printEvenAscending(int num1, int num2)
{
   cout << "The even numbers between "<< num1<< " and "<< num2 << " in ascending order are: "<< endl;

   if (num1 > num2){
      swapFunction(num1, num2);
   }

   if (num1 % 2 != 0){
      num1++;
   }
   for (int i = num1; i < num2; i +=1){
      if (i % 2 == 0){
         cout << i << " ";
      }   
   }
   
   if (num2 % 2 == 0){
   cout << num2;
   }

   cout << endl;


}

void print5Rand(int num1, int num2){

   cout << "The 5 random numbers between "<< num1<< " and "<< num2 << " are: "<< endl;
   srand(time(0));
   if (num1 > num2){
      swapFunction(num1, num2);
   }

   for(int i = 0; i < 5; i++){
      cout << rand () % (num2 - num1) + num1 << " ";
      
   }

  cout << endl; 
}
