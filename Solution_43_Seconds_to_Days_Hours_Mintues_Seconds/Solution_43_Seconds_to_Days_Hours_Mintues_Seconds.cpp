#include <iostream>
#include <string>
using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
	Remainder = Remainder % SecondsPerHours;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;
    
	return TaskDuration;
}

void PrintTaskDurationDetailes(strTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << endl;
}


int main()
{
	int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");

	PrintTaskDurationDetailes(SecondsToTaskDuration(TotalSeconds));


	return 0;
}
