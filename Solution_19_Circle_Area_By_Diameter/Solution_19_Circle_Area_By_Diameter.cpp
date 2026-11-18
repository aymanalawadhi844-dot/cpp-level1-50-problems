
#include <iostream>
#include <string>
using namespace std;

float ReadDiameter()
{
	float D;
	cout << "Please Enter Radious D ?" << endl;
	cin >> D;

	return D;
}

float CircleAreaByDiameter(float D)
{
	const float PI = 3.1415926535893238;
	float Area = (pow(D, 2) * PI) / 4;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByDiameter(ReadDiameter()));

	return 0;
}
