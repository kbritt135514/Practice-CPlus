// Be sure you write a good openning comment section.
//The user program that uses the class Die


/*
File Name: C:\temp\LabUseDieClassLucindaJackson.cpp
Author: Lucinda A. Jackson, Linda Smith (note: if 2 work together)
Course: CSC-260L-01
Program Description: This program is designed to simluate the use of two die by using classes, declarations, public functions and return statements is multiple ways. Such as Counting how many matches
                     , counting how many rolls until two 6's are matched, and counting how many time the sum of the two die rolls is even. The function "roll" simulate the die rolling. While the "getnum()" returns the int number currently face up on the die.
1) 2 Objects are created
2) die1, and die2
3) The face value is 1

*/
 
#include <iostream>
#include <stdlib.h>                             
#include <time.h>
using namespace std;                                
class Die {    
public:
    Die();
      //Default constructor
      //Sets the default number rolled by a die to 1

    void roll();
      //Function to roll a die.
      //This function uses a random number generator to randomly
      //generate a number between 1 and 6, and stores the number
      //in the instance variable num.

    int getNum() const;
      //Function to return the number on the top face of the die.
      //Returns the value of the instance variable num.

private:
    int num;
};

int main() {
    Die die1;		// create 2 die objects die1 and die2
    Die die2;


   /*
	// print the values of die1 and die2
    cout << "die1: " << die1.getNum() << endl;
    cout << "die2: " << die2.getNum() << endl;
	// roll die1 and die2
    die1.roll();  
	die2.roll();
	// print the values of die1 and die2 after the rolling
    cout << "After rolling die1: " << die1.getNum() << endl;
    cout << "After rolling die2: " << die2.getNum() << endl;

    cout << "The sum of the numbers rolled"
         << " by the dice is: "
         << die1.getNum() + die2.getNum() << endl;
	// roll die1 and die2 again
    die1.roll();
    die2.roll();
    // what is the sum of two dice after this roll
    cout << "After again rolling, the sum of "
         << "the numbers rolled is: "
         << die1.getNum() + die2.getNum() << endl;
   */

   cout << "*** Beginning of Part II ***"<< endl;



   int matchCounter = 0; //initialized and assign 0 to a matchCounter
   for (int i = 0; i < 2000; i++){ //loop for 2000 rolls
      die1.roll();
      die2.roll();

      if (die1.getNum() == die2.getNum()){ // if checks for matches and counts them
         matchCounter++;
      }
   }
   cout << "The Die matched a total of " << matchCounter << " Times.\n" <<endl; //print results



   int rollsUntilMatchCounter = 0; //initialized and assign 0 to a rollsUntilMatchCounter
   do {
      die1.roll();
      die2.roll();
      
      if (die1.getNum() && die2.getNum() == 6) { //if checks for matching 6's
         rollsUntilMatchCounter++;
      }
   } while (die1.getNum()!= 6 || die2.getNum() != 6);
   cout << "It took a total of " << rollsUntilMatchCounter << " rolls until both die rolled a 6\n" <<endl;//output results



   int evenSumMatchCounter = 0;//initialized and assign 0 to a evenSumMatchCounter
   for (int i = 0; i < 3000; i++) { //For loops 3000 rolls
      die1.roll();
      die2.roll();

      if ((die1.getNum() + die2.getNum()) % 2 == 0) { // if checks for if the sum of the two rolls is even and counts when it is
         evenSumMatchCounter++;
      }
   }
   cout << "The Sum of the two die was even a total of " << evenSumMatchCounter << " Times.\n" <<endl;// Output results


   cout << "*** Ending of Part II ***"<< endl;
    return 0;
}//end main  

Die::Die() { // constructor
    num = 1;
    srand(time(0));  // put seed down for using rand() later for die rolling
}

void Die::roll() {
    num = rand() % 6 + 1; // random value ranging 1-6
}

int Die::getNum() const {
    return num;
}


