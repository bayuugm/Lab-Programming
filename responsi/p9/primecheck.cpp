#include <iostream>
using namespace std;

int main(){
  int num;
  cout "enter a number: ";
  cin >> num;
  
  bool isPrime = true;
  if(num <= 0){
      isPrime = false;
      }else{
    for(int i = 2;i * i <= num;i++){
        if(num % i == 0){
            isPrime = false;
            break;
                }
            }
        }

  if(isPrime){
    cout << num << " is a prime number." << endl;
  }else{
    cout << num << " is not a prime number." << endl;
  }

return 0;
}
