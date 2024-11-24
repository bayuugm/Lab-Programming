#include <iostream>
using namespace std;

int main()
{
  double area; 
  float radius = 8;
  float pi = 3.14;
  float expectedResult = 201.06;

  cout << "Enter the radius of the circle: " << endl;
  cin >> radius;

  area = pi * (radius*radius);
  cout << "Area of the circle: " << area << endl;
  

  if(expectedResult == area){
    cout << "TEST SUCCESSFUL!" << endl;
    }else{
    cout << "TEST UNSUCCESSFUL!" << endl;
    }

  return 0;
}
