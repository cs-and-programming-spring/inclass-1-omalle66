/***********************************************
* Name: Connor O'Malley
* Email: omalle66@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float MI_KM = 1.609;
const  float PI = 3.14159;
const  float MI_M = 1609.34;
const  float MI_CM = 160934;
const  float MI_MM = 1609340;

int main()
{

	float mi, km;
	
	//Display purpose of the program
	cout << "*****************************************************************************"<<endl;
	cout << "This program his program converts distance in miles to distance in kilometers" <<endl;
	cout << "*****************************************************************************\n\n";
	
	//Get user input
	cout << "Please input distance in miles: ";
	cin >> mi;
	
	//Compute km to miles * MilesToKilometers constant
	km = mi* MI_KM; 
	
	//Display the distance in kilometers
	cout << "\nThe distance in kilometers is = " << km << "\n\n";

	system("pause");
	


	float radius, circumference;
	
	//Display purpose of the program
	cout << "\n\n***************************************************************"<<endl;
	cout << "This program takes in radius to compute circumference of circle" <<endl;
	cout << "***************************************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute circumference by 2*pi*radius
	circumference = 2 * PI * radius; 
	
	//Display the circumference 
	cout << "The circumference is = " << circumference << "\n\n";

	system("pause");
	


	float m, cm, mm;
	
	//Display purpose of the program
	cout << "\n\n******************************************************************************************************"<<endl;
	cout << "This program his program converts distance in miles to distance in meters, centimeters and millimeters" <<endl;
	cout << "******************************************************************************************************\n\n";
	
	//Get user input
	cout << "Please input distance in miles: ";
	cin >> mi;
	
	//Multiply miles by given conversion factors to get meters, centimeters and millimeters
	m = mi * MI_M;
	cm = mi * MI_CM;
	mm = mi * MI_MM;
	
	//Display the distance in meters, centimeters and millimeters
	cout << "\nThe distance is = " << m << " meters, " << cm << " centimeters, " << mm << " millimeters \n\n";

	system("pause");



	float celcius, farenheit;

	//Display purpose of the program
	cout << "\n\n************************************************************************" << endl;
	cout << "This program converts temperature in Celcius to temperature in Farenheit" << endl;
	cout << "************************************************************************\n\n";

	//Get user input
	cout << "Please input temperature in Celcius: ";
	cin >> celcius;

	//Compute farenheit by (9/5) * Celcius + 32
	farenheit = 1.8 * celcius + 32;

	//Display temperature in Farenheit
	cout << "The temperature in Farensheit is " << farenheit << " degrees\n\n";

	system("pause");



	float years, months, days, hours, minutes, seconds;

	//Display purpose of the program
	cout << "\n\n*******************************************************************************" << endl;
	cout << "This program converts age in years to months, days, hours, minutes, and seconds" << endl;
	cout << "*******************************************************************************\n\n";

	//Get user input
	cout << "Please input age in years: ";
	cin >> years;

	//Compute age in months
	months = years * 12;

	//Compute age in days
	days = years * 365.25;

	//Compute age in hours
	hours = days * 24;

	//Compute age in minutes
	minutes = hours * 60;

	//Compute age in seconds
	seconds = minutes * 60;

	//Display age in months, days, hours, minutes, and seconds
	cout << years << " years = " << months << " months, " << days << " days, " << hours << " hours, " << minutes << " minutes, or " << seconds << " seconds\n\n";

	system("pause");



	//Display purpose of the program
	cout << "\n\n******************************************************" << endl;
	cout << "This program prints my first initial as a block letter" << endl;
	cout << "******************************************************\n\n";

	cout << "  ****\n";
	cout << " *\n";
	cout << "*\n";
	cout << "*\n";
	cout << " *\n";
	cout << "  ****\n\n";

	system("pause");

	cout << "Program has ended \n\n";
	
	return 0;
}
