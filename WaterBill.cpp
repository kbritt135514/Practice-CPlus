/*   Keanu Britt
       9/24/24
     Create a program to calculate average of monthly bill*/

//include directives
#include <iostream> 
#include <cmath>


//namespace calling
using namespace std;


//main function
int main() {

//Declaring Variables
double q1Bill, q2Bill, q3Bill, q4Bill, averageMonthlyBill;



//Prompting user for input of all quarters of water bills
cout << "Please input your water bill for quarter 1: "<<endl;
cin >> q1Bill;

cout << "Please input your water bill for quarter 2: "<<endl;
cin >> q2Bill;

cout << "Please input your water bill for quarter 3: "<<endl;
cin >> q3Bill;

cout << "Please input your water bill for quarter 4: "<<endl;
cin >> q4Bill;


//calulation of average
averageMonthlyBill = ((q1Bill + q2Bill + q3Bill + q4Bill) / 12);


//output of Average
cout << "Your average montly bill is $" << averageMonthlyBill <<".";


//If test for the output message of water usage.
if (averageMonthlyBill >= 75.00) {
    cout << "You are using excessive amounts of water.";
}

else if (averageMonthlyBill >= 25.00 && averageMonthlyBill <= 75.00) {
    cout << "You are using a typical amount of water.";
}

else if (averageMonthlyBill < 25.00) {
    cout << "You are conserving water! Thank you for not wasting!";
}

}

