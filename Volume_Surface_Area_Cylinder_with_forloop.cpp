// program 1 Carlton Hart cjhart
// calc vol and surface of cyl
// due 2-5-2016
//ayy lmao

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
  cout << " This program will allow you to calculate the volume and surface area of a cylinder. " << endl; // Tells the user what the program is meant to do.
  
  string input;
  
  for ( ;; )
  {
  
  cout << "Please enter the radius: " << endl;
  cin >> radius;
  cout << " Please enter the height: ";
  cin >> height;
  cout << " So the radius is " << radius << " inches and the height is " << height << " inches, correct? (y/n): " << endl;
    cin >> input;
      if(input == "y")
        {
      break;
        }
      else
        {
      cout << " Please enter the correct radius and/or height. " << endl;
        cout << endl;
        continue;
        }
  }
  
  double volume = pi * (radius * radius) * height;
  double surface = (2.0 * pi * radius * height) + ( 2.0 * pi * (radius * radius)); 
  cout << " A cylinder with a radius of " << radius << " inches and a height of " << height << " inches has a volume of " << volume << " cubic inches and a surface area of " << surface << " square inches. " << endl;
  return 0;
}
