/*
Title: Chapter 2 Exercise 10 - Miles per Gallon
File Name: Chapter2exercise10
Programmer: Dhrumi Mistry
Date: 09/16/2024
Requirements:
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven/Gallons of Gas Used


*/

#include <iostream>
using namespace std;

int main()
{
	const float MILES_TRAVELED = 375,
		TOTAL_GAL_OF_GAS = 15;

	float MPG = MILES_TRAVELED / TOTAL_GAL_OF_GAS;

	cout << endl;
	cout << "A car that holds 15 gallons of gas and that \n ";
	cout << "can travel 375 miles miles before refuiling will \n";
	cout << "use " << MPG << " Miles Per Gallon.\n";
	cout << endl;




	return 0;

}