#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& A, int& H)
{
	cout << "Please Enter Rectangle Base A ?" << endl;
	cin >> A;

	cout << "Please Enter Rectangle Height H ?" << endl;
	cin >> H;

}

float TriangleArea(int A, int H)
{
	float Area = (A / 2) * H;
	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	int A, H;
	ReadNumbers(A, H);
	PrintResults(TriangleArea(A, H));

	return 0;
}
