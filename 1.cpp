#include<iostream>
using namespace std;

void input(int& hours, int& minutes)//input times
{
	cout << "Please input the hours (0~23)" << endl;
	cin >> hours;
	cout << "Please input the minutes(0~59)" << endl;
	cin >> minutes;
}

void convert(int& hours, int& minutes,char &am_pm)//convert to twelve hour clock
{
	if (hours <= 12)
	{
		am_pm = 'A';
	}
	else
	{
		am_pm = 'P';
	}

	if (hours == 0)
	{
		hours = 12;
	}
	else if (hours >= 12)
	{
		hours -= 12;
	}
}
void output(int& hours, int& minutes, char& am_pm)//output twelve hour clock time
{
	cout << "Twelve hour clock is: " << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << am_pm << ".M." << endl;
}


int main()
{
	int hours, minutes;
	char am_pm,repeat;
	do {
		input(hours, minutes);
		convert(hours, minutes, am_pm);
		output(hours, minutes, am_pm);

		cout << "Keeping convert times to am,pm?('Y'or'N')" << endl;
		cin >> repeat;
	} while (repeat == 'Y' || 'y');
	return (0);
}