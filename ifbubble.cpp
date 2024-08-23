/*Author: Keanu Britt
Date Created: 8/23/24*/

#include <iostream> // Preprocessor Directive, this is read before the program is complied
using namespace std;


//This is the function to perform Bubblesort

void bubblesort(int arr[],int n) {
    //The function header declared void to not return any value.

    for (int i = 0; i < n - 1; i++) {  //For iterations
        /*The outer loop of the bubble sort,
        "Int i = 0" Intialized Loop control. I represents current pass or iteration.
        "i < n - 1" The loop will run as long as the condition is met
        "i++" After each pass  i will increase by 1
        */
        for (int j = 0; j < n - i -1; j++) { //This is for the 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout <<endl;
}


//The main function 
int main() {
    int arr[] = {64,34,25,12,22,11,500,123,5241,125,5325};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    bubblesort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;

}