/*  Author: Keanu Britt
    Date: 8/26/24
    Purpose: Calculate the total cost of a trip to the bakery*/


//preprocessor directives
#include <iostream> 
#include <iomanip>

//namespace statement
using namespace std;


//Variables
const float applePies = 6.75; 
const float peachPies = 7.25; 
const float sweetPotatoPies = 8.15; 


int appleAmount;
int peachAmount;
int sweetAmount;
float appleTotal, peachTotal, sweetTotal;
float subTotal;
float totalCost;



//protoype calls
float appleTotalCost(int a, float b, float &c);
float peachTotalCost(int a, float b, float &c);
float sweetTotalCost(int a, float b, float &c);

float subTotalFun(float a, float b, float c, float &d);
float taxAndTotal(float a);

void displayCost(float a, float b);






//main function
int main() {

    cout << "Please enter the Amount of Apple Pies you would like to purchase: "<<endl;
    cin >> appleAmount;

    cout << "Please enter the Amount of Peach Pies you would like to purchase: "<<endl;
    cin >> peachAmount;

    cout << "Please enter the Amount of Apple Pies you would like to purchase: "<<endl;
    cin >> sweetAmount;


    appleTotalCost(appleAmount, applePies, appleTotal);

    peachTotalCost(peachAmount, peachPies, peachTotal);

    sweetTotalCost(sweetAmount, sweetPotatoPies, sweetTotal);

    
    subTotalFun(appleTotal, peachTotal, sweetTotal, subTotal);


    cout << appleTotal << peachTotal << sweetTotal << subTotal; 



    //Print "Press any key to continue..." and wait for input
    system ("pause");


    //end main function
    return 0;
}



float appleTotalCost(int a, float b, float &c) {
    c = a * b;
    return c;
}

float peachTotalCost(int a, float b, float &c) {
    c = a * b;
    return c;
}

float sweetTotalCost(int a, float b, float &c) {
    c = a * b;
    return c;
}

float subTotalFun(float a, float b, float c, float &d){

    d = a + b + c; 
}