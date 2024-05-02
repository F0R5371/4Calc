#include <iostream>
using namespace std;
// This program serves as a simple calculator with only simple arithmetic operations done.

int ModifyNums(int a, int b)
{
	int result = 0;
	int choice;

	cout << "Would you like to add, subtract, multiply, or divide. Or move to advanced options?" << endl;
	cout << "Please enter 1. Add, 2. Subtract, 3. Multiply, 4. Divide, 5. Advanced Options" << endl;
	cin >> choice;

	if (choice == 1)
	{
		result = a + b;
	}
	if (choice == 2)
	{
		result = a - b;
	}
	if (choice == 3)
	{
		result = a * b;
	}
	if (choice == 4)
	{
		result = a / b;
	}
	if (choice == 5)
	{
		// Coming later
	}

	return result;
}

int main()
{
	int a;
	int b;

	string again = "AGAIN";

	while (again != "END")
	{
		while (again == "AGAIN")
		{
			cout << "Hi there! Welcome to the SYNT Calculator App. Please enter in two numbers to modify: " << endl;
			cin >> a;
			cin >> b;

			a = ModifyNums(a, b);

			cout << "Your answer is " << a << ".\n";

			cout << "Would you like to start again, use your answer in another problem, or simply end the program?\n";
			cout << "Enter AGAIN to start again, CONT to use answer in another problem, or END to end the program.\n";
			cin >> again;
		}

		while (again == "CONT")
		{
			cout << "What is the second number you are using?";
			cin >> b;

			a = ModifyNums(a, b);

			cout << "Your answer is " << a << ".\n";

			cout << "Would you like to start again, use your answer in another problem, or simply end the program?\n";
			cout << "Enter AGAIN to start again, CONT to use answer in another problem, or END to end the program.\n";
			cin >> again;
		}
	}

	return 0;
}
