
#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number?" << endl;
	cin >> Number;

	return Number;
}

void PrintRangeFromNTo1_UsingWhile(int N)
{
	int Counter = N+1;

	cout << "Range Printed Using While Statement:\n";

	while (Counter > 1)
	{
		Counter--;

		cout << Counter << endl;
	}
}

void PrintRangeFromNTo1_UsingDoWhile(int N)
{
	int Counter = N+1;

	cout << "Range Printed Using Do..While Statement:\n";

	do
	{
		Counter--;

		cout << Counter << endl;

	} while (Counter > 1);
}

void PrintRangeFromNTo1_UsingFor(int N)
{
	cout << "Range Printed Using For Statement:\n";

	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int N = ReadNumber();

	PrintRangeFromNTo1_UsingWhile(N);
	PrintRangeFromNTo1_UsingDoWhile(N);
	PrintRangeFromNTo1_UsingFor(N);

	return 0;
}

