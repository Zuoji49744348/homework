#include<iostream>

using namespace std;

double convertToMPH(int mins, int secs)
{
	double pace = mins + (secs / 60);
	double mph = 60 / pace;
	return mph;
}

double convertToMPH(double KPH)
{
	double mph = KPH / 1.61;
	return mph;
}

int main()
{
	int pace_min, pace_sec;
	cout << "Please input minutes and seconds per mile " << endl;
	cin >> pace_min >> pace_sec;
	double mph_from_pace = convertToMPH(pace_min, pace_sec);
	cout << "speed from pace: " << mph_from_pace << "mph" << endl;

	double KPH;
	cout << "Please input speed in kilometers per hour" << endl;
	cin >> KPH;
	double mph_from_KPH = convertToMPH(KPH);
	cout << "speed from kph: " << mph_from_KPH << "mph" << endl;

	return(0);
}