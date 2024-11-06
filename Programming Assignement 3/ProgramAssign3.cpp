/*  Author: Keanu Britt
    Date: 8/26/24
    Purpose: Calculate the total cost of a trip to the bakery*/


//preprocessor directives
#include <iostream> 
#include <iomanip>

//namespace statement
using namespace std;


//Variables
const float APPLE_PIE_COST = 6.75; 
const float PEACH_PIE_COST = 7.25; 
const float SWEET_PIE_COST = 8.15; 
const float SHIPPING_COST = 8.75;


int appleAmount;
int peachAmount;
int sweetAmount;
float appleTotal, peachTotal, sweetTotal;
float subTotal;
float taxAmount;
float totalCost;



//protoype calls
void getData(int &appleAmount,int &peachAmount,int &sweetAmount);


void appleTotalCost(int appleAmount, float applePies, float &appleTotal);
void peachTotalCost(int peachAmount, float peachPies, float &peachTotal);
void sweetTotalCost(int sweetAmount, float sweetPotatoPies, float &sweetTotal);


void subTotalFun(float appleTotal,float peachTotal,float sweetTotal,float &subTotal);
void taxAndTotal(float subTotal,float shipCost,float &taxAmount,float &totalCost);


void displayCost(float subTotal,float taxAmount,float shipCost,float totalCost);






//main function
int main() {

    getData(appleAmount, peachAmount, sweetAmount);

    appleTotalCost(appleAmount, APPLE_PIE_COST, appleTotal);

    peachTotalCost(peachAmount, PEACH_PIE_COST, peachTotal);

    sweetTotalCost(sweetAmount, SWEET_PIE_COST, sweetTotal);

    subTotalFun(appleTotal, peachTotal, sweetTotal, subTotal);

    taxAndTotal(subTotal, SHIPPING_COST, taxAmount, totalCost);

    displayCost(subTotal, taxAmount, SHIPPING_COST, totalCost);



    //Print "Press any key to continue..." and wait for input
    system ("pause");


    //end main function
    return 0;
}


//This function gather the input for each pie amount from the user and passes all values by reference back to the main funtion.

//The whiles check for proper input of a positive integer.
void getData(int &appleAmount,int &peachAmount,int &sweetAmount) {
    cout << "Please enter the Amount of Apple Pies you would like to purchase: "<<endl;
        while (!(cin >> appleAmount) || appleAmount < 0) {
        cout << "Invalid input. Please enter a non-negative number for Apple Pies: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "\nPlease enter the Amount of Peach Pies you would like to purchase: "<<endl;
        while (!(cin >> peachAmount) || peachAmount < 0) {
        cout << "Invalid input. Please enter a non-negative number for Peach Pies: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "\nPlease enter the Amount of Sweet Potato Pies you would like to purchase: "<<endl;
    while (!(cin >> sweetAmount) || sweetAmount < 0) {
        cout << "Invalid input. Please enter a non-negative number for Sweet Potato Pies: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }  

}




//This functions calculates the subtotal costs of each pie specifically and output their costs
void appleTotalCost(int appleAmount, float applePies, float &appleTotal) {
    appleTotal = appleAmount * applePies;
    cout << fixed << setprecision(2) << "The total amount for Apple Pies is: $"<< appleTotal << endl;
    
}

void peachTotalCost(int peachAmount, float peachPies, float &peachTotal) {
    peachTotal = peachAmount * peachPies;
    cout << fixed << setprecision(2) << "The total amount for Peach Pies is: $"<< peachTotal << endl;
    
}

void sweetTotalCost(int sweetAmount, float sweetPotatoPies, float &sweetTotal) {
    sweetTotal = sweetAmount * sweetPotatoPies;
    cout << fixed << setprecision(2) << "The total amount for Sweet Potato Pies is: $"<< sweetTotal << endl;
}




//this function computes the subtotal and passes the value pack by reference
void subTotalFun(float appleTotal,float peachTotal,float sweetTotal,float &subTotal){
    subTotal = appleTotal + peachTotal + sweetTotal; 
}



// This function computes the total and taxes and passes the values by reference
void taxAndTotal(float subTotal,float shipCost,float &taxAmount,float &totalCost) {
    const float TAX_RATE = 0.055;
    taxAmount = subTotal * TAX_RATE;
    totalCost = subTotal + taxAmount + shipCost;
}

//this function displays the values passed by reference. Subtotal, taxes, shipping, and Total purchase cost
void displayCost(float subTotal,float taxAmount,float shipCost,float totalCost) {
    cout << fixed << setprecision(2) << "Your subtotal for your purchase is: $" << subTotal << endl;

    cout << fixed << setprecision(2) <<"\nYour total taxes are: $"<< taxAmount << endl;

    cout << fixed << setprecision(2) <<"\nYour shipping cost is: $" << shipCost << endl;

    cout << fixed << setprecision(2) <<"\nThe total of your purchase is: $" << totalCost << endl;
}