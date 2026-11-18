

#include <iostream>
using namespace std;

// ÇáÊÍŞŞ ãä ÇáÚÏÏ ÇáİÑÏí æÇáÒæÌí 

enum enNumberType {Odd = 1, Even = 2};
int ReadNumber()
{
	int num;
	cout << "Please Enter a number?\n";
	cin >> num;

	return num;
}

enNumberType CheckNumberType(int num)
{
	int Result = num % 2;
	if (Result == 0)

		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\n Number is Even.\n";
	else
		cout << "\n Number is Odd.\n";
}

int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));

	return 0;
}
