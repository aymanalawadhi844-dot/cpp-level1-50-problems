
// íØáÈ ãä ÇáãÓÊÎÏã ÇÏÎÇá ÇáÚãÑ æÑÎÕÉ ÇáÓæÇŞÉ , 
//ÇĞÇ ßÇä ÇáÚãÑ ÇßÈÑ ãä 21 æíãÊáß ÑÎÕÉ ÓæÇŞÉ íØÈÚ "Hired",
//ÛíÑ Ğáß íØÈÚ "Regected"

#include <iostream>
using namespace std;

struct stInfo
{
	int age;
	bool HasDrivingLicense;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your Age?\n";
	cin >> Info.age;
	cout << "Do you have driver license?\n";
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired\n";
	else
		cout << "\n Rejected\n";
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}
