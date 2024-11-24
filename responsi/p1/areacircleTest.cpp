#include <iostream>
using namespace std;

int main()
{
  double area; 
  float radius = 8;
  long pi = 3.14159265;
  float expectedResult = 201.06;

  area = pi * (radius*radius);
  cout << "Area of the circle: " << area << endl;
  

  if(expectedResult == area){
    cout << "TEST SUCCESSFUL!" << endl;
    }else{
    cout << "TEST UNSUCCESSFUL!" << endl;
    }

  return 0;
}
