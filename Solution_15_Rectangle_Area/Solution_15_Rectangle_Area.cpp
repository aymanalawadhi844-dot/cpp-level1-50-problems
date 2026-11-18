#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& A, int& B)
{
	cout << "Please Enter Rectangle Width A ?" << endl;
	cin >> A;

	cout << "Please Enter Rectangle Length B ?" << endl;
	cin >> B;

}

float CalculateRectangleArea(int A, int B)
{
	return A * B;
}

void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	int A, B;
	ReadNumbers(A, B);
	PrintResults(CalculateRectangleArea(A, B));

	return 0;
}
