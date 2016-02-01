#include <iostream>

using namespace std;

double pi = 3.141593
double radius;
double height;
double volume;
double surface;

int main()
{
  cout << " This program will allow you to calculate the volume and surface area of a cylinder. " << endl;
  cout << " Please enter the radius: ";
  cin >> radius;
  cout << " Please enter the height: ";
  cin >> height;
  double volume = pi * (radius * radius) * height;
  double surface = (2.0 * pi * radius * height) + ( 2.0 * pi * (radius * radius)); 
  cout << " When the radius of a cylinder is " << radius << " inches and its height is " << height << " inches, the volume is " << volume << " cubic inches and the surface area is " << surface << " square inches." << endl;
  return 0;
}
