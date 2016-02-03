// program 1 Carlton Hart cjhart
// calc vol and surface of cyl
// due 2-5-2016
// ayy lmao

#include <iostream>

using namespace std;

//declare constants and variables
double pi = 3.141593;
double radius;
double height;
double volume;
double surface;

int main()
{
  // Tells the user what the program is meant to do.
  cout << " This program will allow you to calculate the volume and surface area of a cylinder. " << endl;
  cout << endl;
  
  // Creates an input string for the debug
  string input;
  
  
  for ( ;; )
  { //start of the for loop
 
  //Input data if necessary 
  cout << "Please enter the radius: " << endl;
  cin >> radius;
  cout << " Please enter the height: ";
  cin >> height;
 
 // Debug line
  cout << " So the radius is " << radius << " inches and the height is " << height << " inches, correct? (yes/no): " << endl;
    cin >> input;
      if(input == "yes") //If the user doesn't answer "yes," they will have to reenter the correct measurments. 
        {
      cout << endl;
      break;
        }
      else
        {
      cout << " Please enter the correct radius and/or height. " << endl;
        cout << endl;
        continue;
        }
  } //end of the for loop
  
  //Calculations
  double volume = pi * (radius * radius) * height;
  double surface = (2.0 * pi * radius * height) + ( 2.0 * pi * (radius * radius)); 
  cout << " A cylinder with a radius of " << radius << " inches and a height of " << height << " inches has a volume of " << volume << " cubic inches and a surface area of " << surface << " square inches. " << endl;
  return 0;
}
