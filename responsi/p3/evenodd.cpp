#include <iostream>
using namespace std;

int main(){
  int size;
  cout << "Enter the size of the array/list: ";
  cin >> size;
  int A[size];
  cout << "Enter" << size << "Numbers: ";

  for(int i = 0; i < size; i++){
    cin >> A[i];
  }

  int countEven = 0;
  int coutnOdd = 0;

  for(int i = 0;i < size;i++){
    if(A[i] % 2 == 0){
      countEven++;
    }else{
      countOdd++;
    }
  }
  cout << "Even count: " << countEven << endl;
  cout << "Odd count: " << countOdd << endl;
  
}
