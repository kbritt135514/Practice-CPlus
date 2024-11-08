/*  Author: Keanu Britt
    Date: 8/26/24
    Purpose: Calculate the total cost of a trip to the bakery*/


//preprocessor directives
#include <iostream> 
#include <iomanip>

//namespace statement
using namespace std;

//Constants
const float APPLE_PIE_COST = 6.75; 
const float PEACH_PIE_COST = 7.25; 
const float SWEET_PIE_COST = 8.15; 
const float SHIPPING_COST = 8.75;


//Prototype calls
void getData(int &appleAmount, int &peachAmount, int &sweetAmount);
void appleTotalCost(int appleAmount, float &appleTotal);
void peachTotalCost(int peachAmount, float &peachTotal);
void sweetTotalCost(int sweetAmount, float &sweetTotal);
void subTotalFun(float appleTotal, float peachTotal, float sweetTotal, float &subTotal);
void taxAndTotal(float subTotal, float SHIPPING_COST, float &taxAmount, float &totalCost);
void displayCost(float subTotal, float taxAmount, float SHIPPING_COST, float totalCost);

//Main function
int main() {
    char moreOrder;
    int appleAmount, peachAmount, sweetAmount;
    float appleTotal, peachTotal, sweetTotal;


    do {
        float subTotal = 0.0;
        float taxAmount = 0.0;
        float totalCost = 0.0;
        getData(appleAmount, peachAmount, sweetAmount);


        subTotalFun(appleTotal, peachTotal, sweetTotal, subTotal);

        taxAndTotal(subTotal, SHIPPING_COST, taxAmount, totalCost);
        displayCost(subTotal, taxAmount, SHIPPING_COST, totalCost);

        cout << "\nWould you like to add another order? (y/n): ";
        cin >> moreOrder;

    } while (moreOrder == 'y' || moreOrder == 'Y');



    // Print "Press any key to continue..." and wait for input
    system("pause");

    // End main function
    return 0;
}

// Function to gather the input for each pie amount
void getData(int &appleAmount, int &peachAmount, int &sweetAmount) {
    cout << "Please enter the Amount of Apple Pies you would like to purchase: " << endl;
    while (!(cin >> appleAmount) || appleAmount < 0) {
        cout << "Invalid input. Please enter a non-negative number for Apple Pies: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "\nPlease enter the Amount of Peach Pies you would like to purchase: " << endl;
    while (!(cin >> peachAmount) || peachAmount < 0) {
        cout << "Invalid input. Please enter a non-negative number for Peach Pies: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "\nPlease enter the Amount of Sweet Potato Pies you would like to purchase: " << endl;
    while (!(cin >> sweetAmount) || sweetAmount < 0) {
        cout << "Invalid input. Please enter a non-negative number for Sweet Potato Pies: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

// Functions to calculate the subtotal cost of each pie type
void appleTotalCost(int appleAmount, float &appleTotal) {
    appleTotal = appleAmount * APPLE_PIE_COST;
    cout << fixed << setprecision(2) << "The total amount for Apple Pies is: $" << appleTotal << endl;
}

void peachTotalCost(int peachAmount, float &peachTotal) {
    peachTotal = peachAmount * PEACH_PIE_COST;
    cout << fixed << setprecision(2) << "The total amount for Peach Pies is: $" << peachTotal << endl;
}

void sweetTotalCost(int sweetAmount, float &sweetTotal) {
    sweetTotal = sweetAmount * SWEET_PIE_COST;
    cout << fixed << setprecision(2) << "The total amount for Sweet Potato Pies is: $" << sweetTotal << endl;
}

// Function to compute the subtotal
void subTotalFun(float appleTotal, float peachTotal, float sweetTotal, float &subTotal) {

    appleTotalCost(appleAmount, appleTotal);
    peachTotalCost(peachAmount, peachTotal);
    sweetTotalCost(sweetAmount, sweetTotal);

    subTotal += appleTotal + peachTotal + sweetTotal;
}

// Function to compute the tax and total cost
void taxAndTotal(float subTotal, float SHIPPING_COST, float &taxAmount, float &totalCost) {
    const float TAX_RATE = 0.055;
    taxAmount = subTotal * TAX_RATE;
    totalCost = subTotal + taxAmount + SHIPPING_COST;
}

// Function to display the final costs
void displayCost(float subTotal, float taxAmount, float SHIPPING_COST, float totalCost) {
    cout << fixed << setprecision(2) << "Your subtotal for your purchase is: $" << subTotal << endl;
    cout << fixed << setprecision(2) << "\nYour total taxes are: $" << taxAmount << endl;
    cout << fixed << setprecision(2) << "\nYour shipping cost is: $" << SHIPPING_COST << endl;
    cout << fixed << setprecision(2) << "\nThe total of your purchase is: $" << totalCost << endl;
}

