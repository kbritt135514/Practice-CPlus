//File name: "C:\Users\k.britt135514.CS\OneDrive - Norfolk State University\CSC-260\lab01randomnumber.cpp"
//Name: Keanu Britt
//Date: 01/27/2025
//Class: CSC-260L-SEC1
//

/*
Program description: This programs practices using rand() and srand()
This program simulates rolling dice. This program as to parts: 
Part I: 1. roll two dice for 5000 times;
		2. prints out the values when two dice have the same face value -3, 3; 1, 1
		3. prints out the humber rolls with the dice have the same value.
Part II. 1. roll three dice
		 2. find the number of rolls that 3 dice have the face value sum to 12. 
		 Example: 1, 5, 6 or 4, 4, 4
*/

//include libraries
#include <iostream> //use cout, cin, endl
#include <cstdlib> // use rand() and srand()
#include <ctime> // use time()

//Namespace to avoid using std:: specifier
using namespace std;

//
const int NUM = 5000;

//Declaration of variables
int diceNum1;
int diceNum2;
int diceNum3;



//function prototypes
void twoDiceRoll();
void threeDiceRoll();



//main function
int main() {

	//SRand - allows program to actually run different seed results upon each execution
	srand(time(0));


	//Two dice roll function call
	twoDiceRoll();


	//Three dice sum of 12 function call
	threeDiceRoll();


	//end function successful return  0
	return 0;
}


//Two Dice roll Simulation function
void twoDiceRoll() {

	int matchCounter = 0; //Counter initialized to 0

	cout << "\n***** Output from Part I ****\n"<<endl;

	//for loop to test and print matching dice values for a set amount of times - NUM
	for (int i = 0; i < NUM; i++){
		diceNum1 = rand() % 6 + 1;
		diceNum2 = rand() % 6 + 1;


		//If statement to test if the values match. Upon true prints both values and add to counter.
		if (diceNum1 == diceNum2){
			//cout << "Two dice value are: " <<diceNum1 << ", " <<diceNum2<<endl;
			matchCounter++;
		}
	}

	//Prints results of how many matches
	cout << "After rolling "<< NUM << " times with two dice, the same value occured " << matchCounter << " times."<< endl;

}


//Three dice roll Simulation function
void threeDiceRoll(){


	int twelveSumCounter = 0; //Counter for occurrences of sum equaling 12 initialized to 0


	cout << "\n***** Output from Part II ****\n"<<endl;
    
	//for loop to test and print dice values that equal to 12 for a set amount of times - NUM
	for (int i = 0; i < NUM; i++){
		diceNum1 = rand() % 6 + 1;
		diceNum2 = rand() % 6 + 1;
		diceNum3 = rand() % 6 + 1;


		//If statement to test if the 3 rolled values equal to twelve, upon true prints values and adds to counter
		if ((diceNum1 + diceNum2 + diceNum3) == 12){
			cout << "Three dice value are: " <<diceNum1<< ", " << diceNum2 << ", "<< diceNum3<< endl;

			twelveSumCounter++; //counter increase upon meeting criteria of if statement


		}
		
	}
   
   //Display Results
	cout << "After rolling "<< NUM << " times with three dice, the sum 12 occured " << twelveSumCounter << " times."<< endl;
}


