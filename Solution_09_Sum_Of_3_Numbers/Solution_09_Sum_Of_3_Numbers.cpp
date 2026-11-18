
#include <iostream>
using namespace std;

void ReadNumbers(int &Num1,int &Num2,int& Num3)
{
	cout << "Please Enter Number 1 ?\n";
	cin >> Num1;
	cout << "Please Enter Number 2 ?\n";
	cin >> Num2;
	cout << "Please Enter Number 3 ?\n";
	cin >> Num3;
}

int SumOfNumbers(int Num1, int Num2, int Num3)
{
	return  Num1 + Num2+ Num3;
}

void PrintResult(int Total)
{
	cout << "The Total Of Numbers is: " << Total << endl;
}

int main()
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);
	PrintResult(SumOfNumbers(Num1, Num2, Num3));

	return 0;
}
