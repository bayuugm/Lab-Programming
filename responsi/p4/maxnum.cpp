#include <iostream>
using namespace std;

int main(){
  int A[] = {70,102,40,10,78,88}
  int size = sizeof(A) / sizeof(A[0]);

  int maxNum = A[0];

  for(int i = 1; i < size; i++){
    if(A[i] > maxNum){
      maxNum = A[i];
    }
  }

  cout << "The max value is: " << maxNum << endl;

  return 0;
  
}
