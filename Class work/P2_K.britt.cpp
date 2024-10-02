/*  Author: Keanu Britt
    Date: 8/26/24
    Purpose: Calculate total cost of NSU*/


//preprocessor directives
#include <iostream> 
#include <string>

//namespace statement
using namespace std;






//main function
int main() {

    //Declare variables
    const int inStateTuition = 3038;
    const int outStateTuition = 8789;
    char tuitionChoice;
    int tuitionCost;
    bool tuitionTest = false;
    string tuitionString;

    char roomNeededChoice, roomChoice;
    int dormCost;
    string roomType;
    bool roomTest = false;

    char mealChoice;
    int mealCost;
    bool mealTest = false;
    string mealPlan;   

    float semesterTotal;


    do 
    {
        //Prompt user input for tuition choice
        cout << "Are you living in-state or out-of-state?\nA: In-state\nB: Out-of-state" <<endl;
        cin >> tuitionChoice;

        //swtich for tuition choice
        switch (tuitionChoice) {
            case 'a':
            case 'A': cout << "You chose In-State cost of tuition is $3,038." <<endl;
                tuitionCost = inStateTuition;
                tuitionTest = true;
                tuitionString = "In-State";
                break;

            case 'b':
            case 'B': cout << "You chose Out-of-State tuition is $8,879."<<endl;
                tuitionCost = outStateTuition;
                tuitionTest = "Out-Of State";
                tuitionTest = true;
                break;

            default: cout << "FALSE ENTRY TRY AGAIN"<<endl;
                break; 
        }
    } while (tuitionTest == false);


    //More variable declaration

    



    // If answered Yes, prompts user for dorm choice and runs switch for that choice
    do 
    {
        //Prompt user for dorm require ment
        cout << "Do you require a Dorm or Board (Y or N)"<<endl;
        cin >> roomNeededChoice;

        if (roomNeededChoice == 'y' || roomNeededChoice == 'Y') {
            cout << "Please select the type of dorm or Board location you would like. (Costs are price per semester)"<<endl;
            cout << "A: Babette Smith - Twin Towers - $3,883 \nB: Alexander & Scott - $ 3,937 \nC: Charles & Lee Smith - $3,957 \nD: Midrise - $4,739 \nE: Village at Park Place - $5,071 \nF: Overflow Housing - $4,739 \nG: New Resident Hall Complex(Double Suite) - $5,071 \nH: Spartan Suites (Four Bedroom Suite) - $5,310"<< endl;
            cin >> roomChoice;

            switch (roomChoice) {
                case 'a':
                case 'A': cout << "You have chosen Babette Smith - Twin Towers for $3,883 a semester."<<endl;
                    roomType = "Babette Smith - Twin towers";
                    dormCost = 3883;
                    roomTest = true;
                    break;

                case 'b':
                case 'B':  cout << "You have chosen Alexander & Scott for $3,937 a semester."<<endl;
                    roomType = "Alexander & Scott";
                    dormCost = 3937;
                    roomTest = true;
                    break;

                case 'c':
                case 'C': cout << "You have chosen Charles & Lee Smith for $3,957 a semester."<<endl;
                    roomType = " Charles & Lee Smith";
                    dormCost = 3957;
                    roomTest = true;
                    break;

                case 'd':
                case 'D': cout << "You have chosen Midrise for $4,739 a semester."<<endl;
                    roomType = "Midrise";
                    dormCost = 4739;
                    roomTest = true;
                    break;

                case 'e':
                case 'E': cout << "You have chosen Village at Park Place for $5,071 a semester."<<endl;
                    roomType = "Village at Park Place";
                    dormCost = 5071;
                    roomTest = true;
                    break;

                case 'f':
                case 'F': cout << "You have chosen Overflow Housing for $4,739 a semester."<<endl;
                    roomType = "Overflow Housing";
                    dormCost = 4739;
                    roomTest = true;
                    break;

                case 'g':
                case 'G': cout << "You have chosen New Resident Hall Complex (Double Suite) for $5,071 a semester."<<endl;
                    roomType = "New Resident Hall Complex (Double Suite)";
                    dormCost = 5071;
                    roomTest = true;
                    break;

                case 'h':
                case 'H': cout <<"You have chosen Spartan Suites(For Bedroom Suite) for $5,310 a semester."<<endl;
                    roomType = "Spartan Suite (Four Bedroom Suite)";
                    dormCost = 5310;
                    roomTest = true;
                    break;

                default: cout << "FALSE ENTRY TRY AGAIN"<<endl;
                    break;


            }
        }
        else if (roomChoice == 'n' || roomChoice ==  'N') {
        cout << "No room/Dorm/Board needed, no cost added."<<endl;
        }
    } while (roomTest == false);


    

    //More Variable declaration




    //do while loop with a switch statement to process user input
    do
    {
        cout << "Which meal plan would you like to choose?"<<endl;
        cout << "A: 19 Meal Plan w/$150 - $1,930 \nB: 14 Meal Plan w/$275 - $1,930 \nC: 10 Meal Plan w/$325 - $1,858 \nD: 7 Meal Plan w/$400 - $1,636"<<endl;
        cin >> mealChoice;

        switch (mealChoice) {
            case 'a':
            case 'A': cout << "You have chosen the 19 Meal Plan w/$150 for $1,930 a semester."<<endl;
                mealTest = true;
                mealCost = 1930;
                mealPlan = "19 Meal Plan w/$150";
                break;

            case 'b':
            case 'B': cout << "You have chosen the 14 Meal Plan w/$275 for $1,930 a semester."<<endl;
                mealTest = true;
                mealCost = 1930;
                mealPlan = "14 Meal Plan w/$275";
                break;

            case 'c':
            case 'C': cout <<"You have chosen the 10 Meal Plan w/$325 for $1,858 a semester."<<endl;
                mealTest = true;
                mealCost = 1858;
                mealPlan = "10 Meal Plan w/$325";
                break;

            case 'd':
            case 'D': cout <<"You have chosen the 7 Meal Plan w/$400 for $1,636 a semester."<<endl;
                mealTest = true;
                mealCost = 1636;
                mealPlan = "7 Meal Plan w/$400";
                break;

            default: cout << "FALSE ENTRY TRY AGAIN"<<endl;
                break;
        }
    } while (mealTest == false); 

    cout << "Your "<< tuitionString << " tuition is $"<< tuitionCost<< ". "<<endl;

    if (roomNeededChoice == 'y' || roomNeededChoice == 'Y')  {
        cout<< "You chose yes to dorms and selected "<< roomType<< " costing $"<< dormCost <<". "<<endl; 
    } 

    else if (roomChoice == 'n' || roomChoice ==  'N') {
        cout << "No room/Dorm/Board needed, no cost added."<<endl;
        }

    cout << "The meal plan chosen was the "<< mealPlan<< " costing $"<< mealCost<< ". "<<endl;

    semesterTotal = tuitionCost + dormCost + mealCost;

    cout << "The total cost of the semester is: $"<< semesterTotal<< ". "<<endl;


    //Print "Press any key to continue..." and wait for input
    system ("pause");


    //end main function
    return 0;
}
