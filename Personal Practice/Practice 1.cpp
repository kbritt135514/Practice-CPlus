/*\
The purpose of this program is to demonstrate the use of loops nested and all along with sentinals
The program is supposed to take in the amount of hours worked, the job type, how many people and compute the total outputted revenue of the company.
Then allow the user to access and recheck the info posted.

*/

#include <iostream> 
#include <iomanip> 
using namespace std;

float hoursWorked;
char jobType;
int workerNumber;
float cashierPay, floorPay, storagePay, fittingPay, managerPay, employeePay;
float wageMulti;
string employeeName;
char reviewChoice;
int employeeChoice
bool reviewLoop = false;


string names[];
string job[];
float employeePayout[];

cashierPay = 13.00;
floorPay = 15.50;
storagePay = 14.00;
fittingPay = 15.50;
managerPay = 25.50;


int main() {

    cout << "Welcome to the Total Payout Calculator." <<endl;


    cout << "How many employee(s) are being paid this pay period?" <<endl;
    cin >> workerNumber;


    while (workerNumber > 0) {
        for (int i = 1; i <= workerNumber; i++) {

            cout << "Please enter the employee name: "<<endl; 
            cin >> employeeName;
            names[i-1] = employeeName;
        
            cout << "Please select the job type for worker "<< i << ": "<<endl;
            cout << "A: Cashier\n B: Floor Associate\n C: Storage Associate\n D: Fitting Room Associate\n E: Manager"
            cin >> jobType;

            switch (jobType) {
                case 'a':
                case 'A': cout << "Cashier Positions Selected. Hourly Wage is $13/hr."<<endl;
                    job[i-1] = "Cashier";
                    wageMulti = cashierPay;
                    break;
                
                case 'b':
                case "B": cout << "Floor Associate Selected. Hourly Wage is $15.50/hr"<<endl;
                    job[i-1] = "Floor Associate";
                    wageMulti = floorPay;
                    break;

                case 'c':
                case 'C': cout << "Storage Associate Selected. Hourly Wage is  $14/hr"<<endl;
                    job[i-1] = "Storage Associate";
                    wageMulti = storagePay;
                    break;

                case 'd':
                case 'D': cout << "Fitting Room Associate Selected. Hourly Wage is $15.50/hr"<<endl;
                    job[i-1] = "Fitting Room Associate";
                    wageMulti = fittingPay;
                    break;

                case 'e':
                case 'E': cout << "Managerial Position Selected. Hourly wage is $25.50/hr"<<endl;
                    job[i-1] = "Manager"
                    wageMulti = managerPay;
                    break;

                default: cout << "False entry detected!!"<<endl;
                    break;
            }

            do {
                cout << "Please enter the amount of hours Employee #" << i << "worked: "<<endl;
                cin >> hoursWorked;

                employeePay = hoursWorked * wageMulti;

                employeePayout[i - 1] = employeePay;

                cout << fixed << setprecision(2) <<"Employee #"<< i << "earned a total of $"<<employeePay<<endl;
            while (hoursWorked >= 0);




        }

        cout << "Would you like to review the data entered (Y or N)?: "
        cin >> reviewChoice;

       
    
        switch (reviewChoice) {
            case 'y':
            case 'Y':
            case 'Yes':
            case 'yes': 

                reviewLoop = true
                cout << "Which employee would you like to review?: 1 - "<< workerNumber<<endl;
                cin >> employeeChoice;

                cout << "You have chosen employee #" << employeeChoice <<endl;
                cout << "Their entered data is as follows."<<endl;

                cout << "Employee Name: "<< names[employeeChoice - 1]<<endl;

                cout << "Employee Posistion: "<< job[employeeChoice - 1]<<endl;

                cout << fixed << setprecision(2) << "Employee Payout: "<< employeePayout[employeeChoice - 1]<<endl;


                case 'n':
                case 'N':
                case 'No':
                case 'no':
            }          
        


    }

}
