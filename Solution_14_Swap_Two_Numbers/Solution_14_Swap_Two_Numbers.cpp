#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Enter Number 1 ?" << endl;
	cin >> Num1;

	cout << "Please Enter Number 2 ?" << endl;
	cin >> Num2;

}

void Swap2Numbers(int &Num1, int &Num2)
{
	int temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}

void PrintResults(int Num1,int Num2)
{
	cout << "\n Number 1 is: " << Num1 << endl;
	cout << " Number 2 is: " << Num2 << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintResults(Num1, Num2);
	Swap2Numbers(Num1, Num2);
	PrintResults(Num1, Num2);
	

	return 0;
}
