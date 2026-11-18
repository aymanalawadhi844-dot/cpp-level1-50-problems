
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

int ReadPower()
{
	int Number;

	cout << "Please Enter The Power?" << endl;
	cin >> Number;

	return Number;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		//Any Number Powered to zero gives 1
		return 1;
	}

	int P = 1;

	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}

	return P;
}

int main()
{
	cout << "Results = " << PowerOfM(ReadNumber(), ReadPower());

	return 0;
}
