#include <iostream>
#include <string>

using namespace std;


/*
	The order of which classes come matters
	there may be some way around but not sure
*/

// Class that gets user input in form of string then reverses it
class userReturn
{
	public:
		string userInput;
		string retVal;

		userReturn()
		{
			cout << "\n Enter a string: ";
			getline(cin, userInput);

			stringReverse();
		}

		void stringReverse()
		{
			for (int i = userInput.length(); i >= 0; i--)
			{
				retVal.push_back(userInput[i]);
			}
		}

		void printRetVal()
		{
			cout << "\nretVal is:\n" << retVal << endl;
		}
};

int fib(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return  1;
	}

	int arr[num + 1];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr[num];
}


// Main function
int main()
{
	int num;
	// Prints Hello World
	cout << "Hello World";

	// Creates a userReturn object and then prints the reversed string
	userReturn uR1;
	uR1.printRetVal();

	cout << "\n Enter a number: ";
	cin >> num;

	cout << "\nFibonacci of " << num << "is:\n" << fib(num) << "\n";

	return 0;
}