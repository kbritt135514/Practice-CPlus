// Be sure you write a good openning comment section.
//The user program that uses the class Die


/*
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

   int matchCounter = 0;
   for (int i = 0; i < 2000; i++){
      die1.roll();
      die2.roll();

      if (die1.getNum() == die2.getNum()){
         matchCounter++;
      }
   }

   cout << "The Die matched a total of " << matchCounter << " Times.\n" <<endl;



   int rollsUntilMatchCounter = 0;

   while (die1.getNum()!= die2.getNum()) {
      rollsUntilMatchCounter++;
      die1.roll();
      die2.roll();
   }

   cout << "It took a total of " << rollsUntilMatchCounter << " rolls until the die matched\n" <<endl;

   


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
