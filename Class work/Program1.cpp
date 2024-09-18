/*   LAB 4
  Keanu Britt
    9/18/14*/


//Include directives
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>


//namespace 
using namespace std;



//delcare main function
int main() {
    //Declaration of user input variables
    double quiz1, quiz2, quiz3;
    double homework1, homework2, homework3;
    double progLabs1, progLabs2, progLabs3;
    double progAssign1, progAssign2, progAssign3;
    double tests1, tests2, tests3;


    //Declaration of  all computed variables
    double myQuizFinalScore, maximumQuizFinalScore, weightedQuizFinalScore, myQuizFinalScoreAverage;
    double myHomeworkFinalScore, maximumHomeworkFinalScore, weightedHomeworkFinalScore, myHomeworkFinalScoreAverage;
    double myprogLabsFinalScore, maximumprogLabsFinalScore, weightedprogLabsFinalScore, myprogLabsFinalScoreAverage;
    double myprogAssignFinalScore, maximumprogAssignFinalScore, weightedprogAssignFinalScore, myprogAssignFinalScoreAverage;
    double myTestsFinalScore, maximumTestsFinalScore, weightedTestsFinalScore, myTestsFinalScoreAverage;
    double myFinalExamScore, maximumFinalExamScore, weightedFinalExamScore;

    double weightedClassScore;


    //initialized max variables with their values
    maximumQuizFinalScore = 60;
    maximumHomeworkFinalScore = 210;
    maximumprogLabsFinalScore = 120;
    maximumprogAssignFinalScore = 300;
    maximumTestsFinalScore = 300;
    maximumFinalExamScore = 120;

    //Input 3 scores per category. 
    // the If statement checks for inputs below the maximum amount, anything above will end the program to prevent false and bugged outputs
    cout << "Enter you Final Exam Score, 120 Points MAX (Each followed by a space): "<<endl;
    cin >> myFinalExamScore;
    if (myFinalExamScore > 120) {
       cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
       return 0;
    }

    cout << "Enter your 3 Quiz Scores, 20 points MAX (Each followed by a space): "<< endl;
    cin >> quiz1 >> quiz2 >> quiz3;
    if (quiz1 > 20 || quiz2 > 20 || quiz3 > 20) {
        cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
        return 0;
    }

    cout << "Enter your 3 Homework Scores, 70 Points MAX (Each followed by a space): " <<endl;
    cin >> homework1 >> homework2 >> homework3;
    if (homework1 > 70 || homework2 > 70 || homework3 > 70) {
       cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
       return 0; 
    }

    cout << "Enter your 3 Programming Assignment Scores, 100 Points MAX (Each followed by a space): " <<endl;
    cin >> progAssign1 >> progAssign2 >> progAssign3;
    if (progAssign1 > 100 || progAssign2 > 100 || progAssign3> 100) {
       cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
       return 0;        
    }

    cout << "Enter your 3 Programming Lab Scores, 40 Points MAX (Each followed by a space): "<< endl;
    cin >> progLabs1 >> progLabs2 >> progLabs3;
    if (progLabs1 > 40 || progLabs2 > 40 || progLabs3 > 40) {
        cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
        return 0;
    }

    cout << "Enter your 3 Tests Scores, 100 Points MAX (Each followed by a space): " <<endl;
    cin >> tests1 >> tests2 >> tests3;
    if (tests1 > 100 || tests2 > 100 || tests3 > 100) {
       cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
       return 0;
    }



    //Computation of the final scores
    myQuizFinalScore = quiz1 + quiz2 + quiz3;
    myHomeworkFinalScore = homework1 + homework2 + homework3;
    myprogAssignFinalScore = progAssign1 + progAssign2 + progAssign3;
    myprogLabsFinalScore = progLabs1 + progLabs2 + progLabs3;
    myTestsFinalScore = tests1 + tests2 + tests3;

    //Computation of final Score averages
    myQuizFinalScoreAverage = myQuizFinalScore / 3;
    myHomeworkFinalScoreAverage = myHomeworkFinalScore / 3;
    myprogAssignFinalScoreAverage = myprogAssignFinalScore / 3;
    myprogLabsFinalScoreAverage = myprogLabsFinalScore / 3;
    myTestsFinalScoreAverage = myTestsFinalScore / 3;


    //output of the final scores
    cout << "The final Quiz score is: "<< myQuizFinalScoreAverage << endl;

    cout << "The final Homework score is: " << myHomeworkFinalScoreAverage <<endl;
    
    cout<< "The final Program Assignment score is: " << myprogAssignFinalScoreAverage << endl;

    cout << "The final Program Lab score is: " << myprogLabsFinalScoreAverage <<endl;

    cout << "The final Tests score is: " << myTestsFinalScoreAverage <<endl;


    //Weighted score Computation
    weightedQuizFinalScore = (myQuizFinalScore / maximumQuizFinalScore) * 100 * .15;
    weightedHomeworkFinalScore = (myHomeworkFinalScore / maximumHomeworkFinalScore) * 100 * .10;
    weightedprogAssignFinalScore = (myprogAssignFinalScore / maximumprogAssignFinalScore) * 100 * .20;
    weightedprogLabsFinalScore = (myprogLabsFinalScore / maximumprogLabsFinalScore) * 100 * .10;
    weightedTestsFinalScore = (myTestsFinalScore / maximumTestsFinalScore) * 100 * .30;
    weightedFinalExamScore = (myFinalExamScore / maximumFinalExamScore) * 100 * .15;



    //Weighted Score output
    cout << "The weighted Homework score is: " << fixed << setprecision(2) <<weightedHomeworkFinalScore<< endl;

    cout << "The weighted Quiz score is: " << fixed << setprecision(2) <<weightedQuizFinalScore<<endl;

    cout << "The weighted Programming Assignment score is: "<< fixed << setprecision(2) << weightedprogAssignFinalScore <<endl;

    cout << "The weighted Programming Lab score is: " << fixed << setprecision(2) << weightedprogLabsFinalScore<<endl;

    cout << "The weighted Tests score: " << fixed << setprecision(2) <<weightedTestsFinalScore<< endl;

    cout << "The weighted Final Exam Score is: " << fixed << setprecision(2) <<weightedFinalExamScore<<endl;



    //weighted class overall computation
    weightedClassScore = weightedFinalExamScore+ weightedHomeworkFinalScore + weightedHomeworkFinalScore + weightedprogAssignFinalScore + weightedprogLabsFinalScore + weightedQuizFinalScore + weightedTestsFinalScore;

   //output of the final weight score for the class
    cout << "My final overall weighted score for CSC 170: "<< fixed << setprecision(2) <<weightedClassScore;

    return 0;
}