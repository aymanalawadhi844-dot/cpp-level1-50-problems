#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& A, int& D)
{
	cout << "Please Enter Rectangle Side A ?" << endl;
	cin >> A;

	cout << "Please Enter Rectangle Diagonal D ?" << endl;
	cin >> D;

}

float RectangleAreaBySideAndDiagonal(int A, int D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	int A, D;
	ReadNumbers(A, D);
	PrintResults(RectangleAreaBySideAndDiagonal(A, D));

	return 0;
}
