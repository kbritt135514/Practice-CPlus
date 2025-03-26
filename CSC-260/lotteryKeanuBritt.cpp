#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool linearSearch(const vector<int>&, int);
bool binarySearchModified(const vector<int>&, int);



int main() {


   vector<int> luckyNumbers = {13579, 26791, 26792, 33445, 55555, 
                              62483, 77777, 79422, 85647, 93121};
   

   int winningNumber;

   cout  << "Enter this weeks winning 5-digit number: ";
   cin >> winningNumber;

   if (linearSearch(luckyNumbers, winningNumber)){
      cout << "Congratulations! You Have a winning ticket! (Linear Searched)"<< endl;

   }
   else {
      cout << "Sorry, no match found using Linear search." <<endl;
   }

   sort(luckyNumbers.begin(), luckyNumbers.end());

   if (binarySearchModified(luckyNumbers, winningNumber)) {
      cout << "Congratulations! You have a winning ticket! (Binary Searched)"<<endl;
   }
   else {
      cout << "Sorry, no match found using binary binary search." <<endl;
   }

   return 0;


}


bool linearSearch(const vector<int>& numbers, int target){
   for (int num : numbers) {
      if (num == target){
         return true;
      }
   }
   return false;
}

bool binarySearchModified(const vector<int>& numbers, int target) {
   return binary_search(numbers.begin(), numbers.end(), target);

}

