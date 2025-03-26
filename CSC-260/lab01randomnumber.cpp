//Name: Keanu Britt
//Date: 01/27/2025
//Class: CSC-260L-SEC1

/*
Program description: This program simulates rolling dice. This program as to parts: 
Part I: 1. roll two dice for 5000 times;
		2. prints out the values when two dice have the same face value -3, 3; 1, 1
		3. prints out the humber rolls with the dice have the same value.
Part II. 1. roll three dice
		 2. find the number of rolls that 3 dice have the face value sum to 12. 
		 Example: 1, 5, 6 or 4, 4, 4
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int diceNum1;
int diceNum2;
int diceNum3;
int NUM = 5000;

void twoDiceRoll();
void threeDiceRoll();


int main() {
	srand(time(0));

	twoDiceRoll();

	threeDiceRoll();

	return 0;
}

void twoDiceRoll() {
	int matchCounter = 0;
	cout << "***** Output from Part I ****"<<endl;
	for (int i = 0; i < NUM; i++){
		diceNum1 = rand() % 6 + 1;
		diceNum2 = rand() % 6 + 1;

		if (diceNum1 == diceNum2){
			cout << "Two dice value are: " <<diceNum1 << ", " <<diceNum2<<endl;
			matchCounter++;
		}
	}
	cout << "After rolling "<< NUM << " times with two dice, the same value occured " << matchCounter << " times."<< endl;

}

void threeDiceRoll(){
	int twelveMatchCounter = 0;
	cout << "***** Output from Part II ****"<<endl;
	for (int i = 0; i < NUM; i++){
		diceNum1 = rand() % 6 + 1;
		diceNum2 = rand() % 6 + 1;
		diceNum3 = rand() % 6 + 1;

		if ((diceNum1 + diceNum2 + diceNum3) == 12){
			cout << "Three dice value are: " <<diceNum1<< ", " << diceNum2 << ", "<< diceNum3<< endl;
			
			twelveMatchCounter++;
		}
		
	}
	cout << "After rolling "<< NUM << " times with three dice, the sum 12 occured " << twelveMatchCounter << " times."<< endl;
}

