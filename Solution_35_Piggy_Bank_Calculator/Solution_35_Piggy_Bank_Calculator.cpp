#include <iostream>
using namespace std;

struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContenet;

	cout << "Please Enter a Total Pennies?\n";
	cin >> PiggyBankContenet.Pennies;

	cout << "Please Enter a Total Nickels?\n";
	cin >> PiggyBankContenet.Nickels;

	cout << "Please Enter a Total Dimes?\n";
	cin >> PiggyBankContenet.Dimes;

	cout << "Please Enter a Total Quarters?\n";
	cin >> PiggyBankContenet.Quarters;

	cout << "Please Enter a Total Dollars?\n";
	cin >> PiggyBankContenet.Dollars;

	return PiggyBankContenet;
}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;

	TotalPennies = PiggyBankContenet.Pennies * 1 +
		PiggyBankContenet.Nickels * 5 +
		PiggyBankContenet.Dimes * 10 +
		PiggyBankContenet.Quarters * 25 +
		PiggyBankContenet.Dollars * 100;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());

	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;

	return 0;
}