#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


char* readKey(ifstream&, int);
void processStudent(ifstream&, ofstream&, const char*, int);
char calculateGrade(int, int);




int main (){
   
   int numQuestions = 20;

   ifstream inFile("examData.txt");
   ofstream outFile("results.txt");

   if (!inFile || !outFile) {
      cout << "Error opening file. "<<endl;
      return 1;
   }


   char* answerKey = readKey(inFile, numQuestions);

   outFile << left << setw(12) << "Student ID" << setw(numQuestions * 2) << "Answers"
            << setw(8) << "Score" << "Grade\n";
    outFile << string(50, '-') << endl;

   string studentID;
   while(inFile >> studentID) {
      processStudent(inFile, outFile, answerKey, numQuestions);
   }

   delete[]answerKey;
   inFile.close();
   outFile.close();

   cout << "Processing Complete. Results saved in 'results.txt'"<< endl;
   return 0;


}


char* readKey(ifstream& inFile, int numQuestions){
   char* key = new char[numQuestions];
   for (int i = 0; i < numQuestions; i++) {
      inFile >> key[i];

   }
   return key;
}

void processStudent(ifstream& inFile, ofstream& outFile, const char* answerKey, int numQuestions) {
   string studentID;
   char* studentAnswers = new char[numQuestions];
   int score = 0;

   inFile >> studentID;

   for (int i = 0; i < numQuestions; i++) {
      inFile >> studentAnswers[i];

      if (studentAnswers[i] == answerKey[i]) {
         score += 2;
      }
      else if (studentAnswers[i] == ' ') {
         score += 0;
      }
      else {
         score -= 1;
      }
   }



   int maxScore = numQuestions * 2;
   char grade = calculateGrade(score, maxScore);


   outFile << left << setw(12) << studentID;
   for (int i = 0; i < numQuestions; i++) {
      outFile << studentAnswers[i] << " ";

   }

   outFile << setw(6) << score << " " << grade  << endl;

   delete[] studentAnswers;
}

char calculateGrade(int score, int maxScore) { 
   double percentage = (static_cast<double>(score)/ maxScore) * 100;

   if (percentage >=90 ) return 'A';
   else if (percentage >= 80) return 'B';
   else if (percentage >= 70) return 'C';
   else if (percentage >= 60) return 'D';
   else return 'F';

}