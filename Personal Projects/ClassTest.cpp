#include <iostream>
#include <iomanip>

//Global Variable section
int userVal;
int counter = 0;
char menuChoice;




//Protoype section


//displayMenu Function Protos
char displayMenu();


//Collatz Function Protos
int  getNum();
void collatzConjecture(int userVal);
void displayGraphicalRepresentation(int value, int step);


// Main function 
int main(){

    menuChoice = displayMenu();

    switch (menuChoice) {
        case 'a':
        case 'A':   
            userVal = getNum();
            collatzConjecture(userVal);
            break;

        case 'b':
        case 'B': 
            break;
    }
    
    return 0;

}





// Function Definitions 

//Main Menu function.

char displayMenu(){ 
    std::cout << "Please enter the corrosponding letter of the program you would like to use:"<< std::endl;
    std::cout << "A: Collatz Conjecture" << std::endl;

    while (!(std::cin >> menuChoice) || !isalpha(menuChoice)) {
        std::cout << "Please enter a Valid upper case or lower case character. \nPlease try again." <<std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    return menuChoice;
}


//Collatz Conjecture Functions
int getNum(){
    int input;
    std::cout << "Please enter a positive integer: "<< std::endl;

    while (!(std::cin >> input) || (input < 0)) {
        std::cout << "Please enter a Valid Positive integer. \nPlease try again." <<std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    return input;

}

void collatzConjecture(int userVal){
    int b = userVal;

    while (!(b == 1)){
        displayGraphicalRepresentation(b, counter);
        if (b % 2 != 0) {
            b = ((3 * b) + 1);
            counter++;
        }

        else if (b % 2 == 0) {
            b /= 2;
            counter++;
        }
        
    }
    
    std::cout << "This program ran a total of " << counter << " calculations to reach the number 1." << std::endl;
}


void displayGraphicalRepresentation(int value, int step){
    std::cout << "Step " << step + 1 <<" [" <<value<< "]: ";

    for (int i = 0; i < value && i < 50; i++) {  
        std::cout << "#";
    } 

    std::cout << std::endl;
}