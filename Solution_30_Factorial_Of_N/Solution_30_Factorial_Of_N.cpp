
#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Mssage)
{
	int Number;
	do
	{
		cout << Mssage << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int Factorial(int N)
{
	int F = 1;

	for (int Counter = N; Counter >= 1; Counter--)
	{
		F = F * Counter;
	}

	return F;
}

int main()
{
	cout << Factorial(ReadPositiveNumber("Please Enter a Positive Number?")) << endl;

	return 0;
}

