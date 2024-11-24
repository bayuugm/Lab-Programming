#include <iostream>
using namespace std;

int main()
{
  float area, radius;
  float pi = 3.14;

  cout << "Enter the radius of the circle: " << endl;
  cin >> radius;

  area = pi * (radius*radius);
  cout << "Area of the circle: " << area << endl;

  return 0;
}
