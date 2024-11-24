#include <iostream>
using namespace std;

int main(){
  int A[] = {1,2,3,4,5,6,7,8,9,10}
  int size = sizeof(A) / sizeof(A[0]);

  int countEven = 0;
  int coutnOdd = 0;

  for(int i = 0;i < size;i++){
    if(A[i] % 2 == 0){
      countEven++;
  }else{
      countOdd++;
  }

  cout << "Even count: " << countEven << endl;
  cout << "Odd count: " << countOdd << endl;
  
}
