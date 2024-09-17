#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main() {
    //Declaration of user input variables
    double quiz1, quiz2, quiz3;
    double homework1, homework2, homework3;
    double progLabs1, progLabs2, progLabs3;
    double progAssign1, progAssign2, progAssign3;
    double test1, test2, test3;


    //Declaration of computed variables
    double myQuizFinalScore, maximumQuizFinalScore, weightedQuizFinalScore;
    double myHomeworkFinalScore, maximumHomeworkFinalScore, weightedHomeworkFinalScore;
    double myprogLabsFinalScore, maximumprogLabsFinalScore, weightedprogLabsFinalScore;
    double myprogAssignFinalScore, maximumprogAssignFinalScore, weightedprogAssignFinalScore;
    double myTestFinalScore, maximumTestFinalScore, weightedTestFinalScore;
    double myFinalExamScore, maximumFinalExamScore, weightedFinalExamScore;

    double weightedClassScore;


    //initialized max variables with their values
    maximumQuizFinalScore = 60;
    maximumHomeworkFinalScore = 210;
    maximumprogLabsFinalScore = 120;
    maximumprogAssignFinalScore = 300;
    maximumTestFinalScore = 300;
    maximumFinalExamScore = 120;

    //Input 3 scores per category. 
    // the If statement checks for inputs below the maximum amount anything above will end the program to prevent false and bugged outputs
    
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

    cout << "Enter your 3 Test Scores, 100 Points MAX (Each followed by a space): " <<endl;
    cin >> test1, test2, test3;
    if (test1 > 100 || test2 > 100 || test3 > 100) {
       cout << "ERROR VALUE ABOVE MAX SCORE ENTERED";
       return 0;
    }



    //Computation of the final homeworks scores
    myQuizFinalScore = quiz1 + quiz2 + quiz3;
    myHomeworkFinalScore = homework1 + homework2 + homework3;
    myprogAssignFinalScore = progAssign1 + progAssign2 + progAssign3;
    myprogLabsFinalScore = progLabs1 + progLabs2 + progLabs3;
    myTestFinalScore = test1 + test2 + test3;



    //output of the final scores
    cout << "The final Quiz score is: "<< myQuizFinalScore << endl;

    cout << "The final Homework score is: " << myHomeworkFinalScore <<endl;
    
    cout<< "The final Program Assignment score is: " << myprogAssignFinalScore << endl;

    cout << "The final Program Lab score is: " << myprogLabsFinalScore <<endl;

    cout << "The final Test score is: " << myTestFinalScore <<endl;


    //Weighted score Computation
    weightedQuizFinalScore = (myQuizFinalScore / maximumQuizFinalScore) * 100 * .15;
    weightedHomeworkFinalScore = (myHomeworkFinalScore / maximumHomeworkFinalScore) * 100 * .10;
    weightedprogAssignFinalScore = (myprogAssignFinalScore / maximumprogAssignFinalScore) * 100 * .20;
    weightedprogLabsFinalScore = (myprogLabsFinalScore / maximumprogLabsFinalScore) * 100 * .10;
    weightedTestFinalScore = (myTestFinalScore / maximumTestFinalScore) * 100 * .30;
    weightedFinalExamScore = (myFinalExamScore / maximumFinalExamScore) * 100 * .15;



    //Weighted Score output
    cout << "The weighted Homework score is: " <<weightedHomeworkFinalScore<< endl;

    cout << "The weighted Quiz score is: " <<weightedQuizFinalScore<<endl;

    cout << "The weighted Programming Assignment score is: "<< weightedprogAssignFinalScore <<endl;

    cout << "The weighted Programming Lab score is: " << weightedprogLabsFinalScore<<endl;

    cout << "The weighted Test score: " <<weightedTestFinalScore<< endl;

    cout << "The weighted Final Exam Score is: " <<weightedFinalExamScore<<endl;



    //weighted class overall computation
    weightedClassScore = weightedFinalExamScore+ weightedHomeworkFinalScore + weightedHomeworkFinalScore + weightedprogAssignFinalScore + weightedprogLabsFinalScore + weightedQuizFinalScore + weightedTestFinalScore;


    cout << "My final overall weighted score for CSC 170: "<< weightedClassScore;

    return 0;
}