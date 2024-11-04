#include <iostream>
#include <iomanip>





int userVal;
int counter;


void getNum(int &a);

void collatzConjecture(int &a);



int main(){

getNum(userVal);

collatzConjecture(userVal);


}



void getNum(int &a){
    std::cout << "Please enter a positive integer: "<< std::endl;

    while (!(std::cin >> userVal) || (userVal < 0)) {
        std::cout << "Please enter a Valid Positive integer. \nPlease try again." <<std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

}



void collatzConjecture(int &a){
    int b = a;

    while (!(b == 1)){
        if (b % 2 != 0) {
            b = ((3 * b) + 1);
            std::cout << b << std::endl;
            counter++;
        }

        else if (b % 2 == 0) {
            b /= 2;
            std::cout << b << std::endl;
            counter++;
        }
        
    }
    
    std::cout << "This program ran a total of " << counter << " calculations." << std::endl;
}