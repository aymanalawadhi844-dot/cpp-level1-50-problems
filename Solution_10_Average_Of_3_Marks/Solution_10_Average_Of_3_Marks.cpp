
#include <iostream>
using namespace std;

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Enter Mark 1 ?\n";
	cin >> Mark1;
	cout << "Please Enter Mark 2 ?\n";
	cin >> Mark2;
	cout << "Please Enter Mark 3 ?\n";
	cin >> Mark3;
}

int SumOfNumbers(int Mark1, int Mark2, int Mark3)
{
	return  Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOfNumbers(Mark1,Mark2,Mark3)/3;
}

void PrintResult(float Average)
{
	cout << "Average is: " << Average << endl;
}


int main()
{
	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

	return 0;
}
