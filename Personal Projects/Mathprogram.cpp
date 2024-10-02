// The purpose of this program is to demonstrate abilities in creating a use full mathematics program

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 


bool validChoice;
char menuChoice;

int main() {
    cout << "Please select a choice from the Menu by entering the corrosponding Letter: " << endl;
    cout << "A: Collatz Conjecture"<<endl;
    cout << "B: Pythagorean Theorem"<<endl;

    cin >> menuChoice;
    do 
    {
        switch(menuChoice) {
            case 'a':
            case 'A': 
            case 'b': 
            case 'B': 
            case 'c':
            case 'C': validChoice = true;
                break;
            default: validChoice == false;
        }

        if (validChoice == false) {
        cout << "False choice please enter a valid choice."; 
        break;
        }

    } while (validChoice == false);

    switch (menuChoice) {

        case 'a':
        case 'A': cout << "You chose the collatz conjecture."<< endl;
            int i;
            int num;
            cout << "Please enter an integer for the forumula: "<< endl;
            cin >> num;

            while (num != 1) {
                if (num % 2 == 0) {
                    num = num/2;
                    cout << num <<endl;
                    i++;
                }
                else {
                    num = (3 * num) + 1;
                    cout << num <<endl;
                    i++;
                }
            }
            if (num == 1) {
                cout << "Computation completed"<< endl;
                cout << "A total of "<< i << " computation were completed to achieve 1."<<endl;
            }
            break;
            
        case 'b':
        case 'B': cout << "You chose the Pythagorean Theorem." <<endl;
            char pythagChoice;

            float A, B, C;

            cout << "Which variable are you looking for?: "<< endl;
            cout << "A or B or C" <<endl;
            cin >> pythagChoice;


            switch (pythagChoice) {
                case 'a':
                case 'A': cout << "Looking for Leg (A)" << endl;
                    cout << "Enter the B Value: " <<endl;
                    cin >> B;
                    cout << "Enter the C Value: "<<endl;
                    cin >> C;

                    A = sqrt (pow(C,2) - pow(B,2));
                    cout << fixed << setprecision(2) <<"Leg (A) is: "<< A << endl;
                    break;

                case 'b':
                case 'B': cout << "Looking for Leg(B)"<<endl;
                    cout << "Enter the A Value: "<< endl;
                    cin >> A;
                    cout << "Enter the C Value: "<< endl;
                    cin >> C;

                    B = sqrt (pow(A,2) + pow(C,2));
                    cout << fixed << setprecision(2) <<"Leg (B) is: "<< B << endl;
                    break;

                case 'c':
                case 'C': cout <<"Looking for the hypotenuse."<<endl;
                    cout << "Enter the A value: "<<endl;
                    cin >> A;
                    cout << "Enter the B Value: "<<endl;
                    cin >> B;

                    C = sqrt (pow(A,2) + pow(B,2));

                    cout << fixed << setprecision(2) << "The hypotenuse is: " << C <<endl;
                    break;
            }
    }
    return 0;
}
