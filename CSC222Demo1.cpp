// CSC222Demo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program takes seconds as input, converts the seconds to hours, minutes, and seconds
// and displays the converted time.

#include <iostream>

using namespace std;


int main()
{
	int seconds, hours, minutes;

	cout << "Enter the elapsed time in seconds: ";
	cin >> seconds;

	hours = seconds / 3600;
	minutes = seconds % 3600 / 60;
	seconds = seconds % 3600 % 60;

	cout << "Time:" << hours << ":" << minutes << ":" << seconds << endl;


	return 0;

}
