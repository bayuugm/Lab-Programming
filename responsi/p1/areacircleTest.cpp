#include <iostream>
using namespace std;

int main()
{
  double area; 
  float radius = 8;
  double pi = 3.14;
  float expectedResult = 200.96;

  area = pi * (radius*radius);
  cout << "Area of the circle: " << area << endl;
  

  if(expectedResult == area){
    cout << "TEST SUCCESSFUL!" << endl;
    }else{
    cout << "TEST UNSUCCESSFUL!" << endl;
    }

  return 0;
}
