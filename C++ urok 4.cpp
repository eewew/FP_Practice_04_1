#include <iostream>
using namespace std;
int main()
{
	cout << "\t\tTASK 1\n";
	int digit;
	cout << "Enter your digit: ";
	cin >> digit;

	if (digit % 2)
		cout << "Digit neparne.";
	else{
		cout << "Digit parne.";
	}


	cout << "\n\t\tTASK 2\n";
	int a;
	int b;
	cout << "Enter first digit: ";
	cin >> a;
	cout << "Enter second digit: ";
	cin >> b;

	if (a > b)
	{
		cout << b << " is smaller digit";
	}
	else {
		cout << a << " is smaller digit";
	}


	cout << "\n\t\tTASK 3\n";
	int x;
	cout << "Enter digit: ";
	cin >> x;

	if (x > 0)
	{
		cout << "Positive digit.";
	}
	else if (x < 0) 
	{
		cout << "Negative digit.";
	}
	else
	{
		cout << "Zero.";
	}


	cout << "\n\t\tTASK 4\n";
	int c, d;
	cout << "Enter 2 numbers: ";
	cin >> c >> d;

	if (c == d)
	{
		cout << "Numbers are equal.";
	}
	else if (c < d)
	{
		cout << c << " " << d;
	}
	else
	{
		cout << d << " " << c;
	}
}