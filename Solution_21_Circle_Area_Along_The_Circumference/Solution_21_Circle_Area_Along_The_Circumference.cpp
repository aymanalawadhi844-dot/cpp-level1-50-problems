
#include <iostream>
#include <string>
using namespace std;

float ReadCircumference()
{
	float L;
	cout << "Please Enter Circumference ?" << endl;
	cin >> L;

	return L;
}

float CircleAreaByCircumference(float L)
{
	const float PI = 3.1415926535893238;
	float Area = pow(L, 2) / (4 * PI);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircumference()));

	return 0;
}
