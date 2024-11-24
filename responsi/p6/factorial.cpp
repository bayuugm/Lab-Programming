#include <iostream>
using namespace std;

int factorial(int num){

  if (num <= 1){
    return 1;
  }

  return num * factorial(num - 1);
}

int main(){

  int num;
  cout << "Enter a number: " << endl;
  cin >> num;
  if(num == 0 || num < 0){
    cout << "Please enter a positive integer: ";
    cin >> num;
  }
    cout << "Factorial of " << num << ": " << factorial(num) << endl;

  return 0;
}
