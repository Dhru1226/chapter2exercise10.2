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
	float miles_travelled = 0.0; // Initialize with 0.0
	float total_gal_of_gas = 0.0; // Initialize with 0.0
	float MPG = 0.0; // Initialize with 0.0;

	//get user unput
	cout << "Enter the number of miles traveled: ";
	cin >> miles_travelled;

	cout << "Enter the total gallons of gas used: ";
	cin >> total_gal_of_gas;

	//Calculate MPG
	MPG = miles_travelled / total_gal_of_gas;

	//Display the result
	cout << endl;
	cout << "The car gets " << MPG << " miles per gallon. \n";
	cout << endl;

	return 0;

}