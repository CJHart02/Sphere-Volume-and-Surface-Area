// program 1 Carlton Hart cjhart
// calc vol of cyl
// due 2-5-2016
// ayy lmao


#include <iostream>

using namespace std;

// declare constants and variables
double pi = 3.141593; 
double radius;
double height;
double volume;
 
int main()
{
	// Declares the purpose of the program
	cout << " This program will allow you to calculate the volume of a cylinder. " << endl;
	cout << endl;
	
	string input;

	
	for ( ;; )
	{
	
	// Input data if necessary (in this case it is unless you feel like getting 0 every time.)
	cout << " Please enter the radius: ";
	cin >> radius;
	cout << " Please enter the height: ";
	cin >> height;
	cout << endl;
	
	// Debug Line. If the user doesn't answer "yes," they will have to reenter the correct measurements.
	cout << " So the radius is " << radius << " inches and the height is " << height << " inches, correct? (yes/no): ";
		cin >> input;
			if (input == "yes")
				{
			cout << endl;
			break;
				}
			else
				{
				cout << " Please reenter the correct radius and/or height. ";
					cout << endl;
					continue;

				}
	}
	
	// make calculations
	double volume = pi * (radius * radius) * height;
	
	// gives last debug and outputs the answers
	cout << " A cylinder with a radius of " << radius << " inches and a height of " << height << " inches has a volume of " << volume << " cubic inches. " << endl;
	return 0;
}
