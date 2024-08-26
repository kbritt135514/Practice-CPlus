#include <iostream>
using namespace std;

int main() {
    
    double hours, rate, pay;

    cout <<"How many hours did you work?";
    cin >> hours;

    cout << "How much do you get paid per hour?";
    cin >> rate;

    pay = hours * rate; 

    cout << "You have earned a total of: $"<< pay <<endl;

    return 0;
    
}