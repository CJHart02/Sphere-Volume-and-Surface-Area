#include <iostream>

using namespace std;

float radius; 
float pi = 3.141592;
float volume = (4.0 / 3.0) * pi * (radius * radius * radius);
float surface_area = 4.0 * pi * (radius * radius);

int main()
{
  cout << " This program will allow you to calculate the volume and surface area of a sphere. "
  cout << " Please enter the radius of the sphere: "
  cin >> radius; 
  cout << " When the radius of a sphere is " << radius << " , the volume is " << volume << " cubic units and the surface area is " << surface_area << endl;
  return 0;
}
  
