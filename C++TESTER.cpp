#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// This program serves as a simple calculator with only simple arithmetic operations done (+, -, *, /) and x^ and x^(1/x).
// With trig functions, log functions/ln functions to come soon and a possibility of graphing.

float ModifyNums(float a, float b)
{
	float result = 0;
	int choice;

	cout << "Would you like to add, subtract, multiply, or divide. Or move to advanced options?" << endl;
	cout << "Please enter 1. Add, 2. Subtract, 3. Multiply, 4. Divide, 5. Advanced Options (x^, x^1/, sin(x))" << endl;
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
		cout << "Would you like to square something, (x^y), root something? (x^(1/y)), use trigonometric functions (using only first number), or use log functions (using 2 or 1 number?" << endl;
		cout << "1 for squaring, 2 for rooting, 3 for trig functions, and 4 for log functions." << endl;

		cin >> choice;

		if (choice == 1)
		{
			result = pow(a, b);
		}
		if (choice == 2)
		{
			result = pow(a, 1.0/b);
		}
		if (choice == 3)
		{
			cout << "Would you like to use the sin, cos, tan, csc, sec, or cot function?" << endl;
			cout << "Type in 1 sin, 2 cos, 3 tan, 4 csc, 5 sec, 6 cot" << endl;

			cin >> choice;

			if (choice == 1)
			{
				result = sin(a);
			}
			if (choice == 2)
			{
				result = cos(a);
			}
			if (choice == 3)
			{
				result = tan(a);
			}
			if (choice == 4)
			{
				result = 1 / (sin(a));
			}
			if (choice == 5)
			{
				result = 1 / (cos(a));
			}
			if (choice == 6)
			{
				result = 1 / (tan(a));
			}
		}

		if (choice == 4)
		{
			if (b == 0)
			{
				if (a > 0 && a != 1)
				{
					result = log10(a);
				}
			}
			else
			{
				if (a > 0 && a != 1 && b != 0)
				{
					result = (log(b) / log(a));
				}
			}
		}
	}

	return result;
}

int main()
{
	float a;
	float b;

	string again = "AGAIN";

	while (again != "END")
	{
		while (again == "AGAIN")
		{
			cout << "Hi there! Welcome to the SYNT Calculator App. Please enter in two numbers to modify." << endl;
			cout << "Or enter use one number by entering in 0 for the second number: \n";
			cin >> a;
			cin >> b;

			a = ModifyNums(a, b);

			cout << "Your answer is " << setprecision(3) << a << ".\n";

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
