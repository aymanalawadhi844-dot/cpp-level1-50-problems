
#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
	string PinCode;

	cout << "Please Enter PIN Code" << endl;
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			system("color 4F");//turn screen to Red
			cout << "\n Wrong PIN, You Have "<<Counter<<" More Tries\n";
		}
	} while (Counter >= 1 && PinCode !="1234");

	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");//turn screen to green
		cout << "\n Your Account Balance is: " << 750 << endl;
	}
	else
	{
		cout << "\n Your Card Blocked Call The Bank For Help.\n";
	}


	return 0;
}
