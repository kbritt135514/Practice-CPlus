// This program has the user input a number n and then finds the
// mean of the first n positive integers

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
	int min, max;
	int value;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers

	cout << "Please enter a min integer then a max integer" << endl;
	cin >> min>> max;

	if (min > 0 && max > 0)
	{
		for (number = min; number <= max; number++)
		{
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / number;	// note the use of the typecast
													// operator here 
		cout << "The mean average between " << min
			 << " and "<< max <<" is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}
