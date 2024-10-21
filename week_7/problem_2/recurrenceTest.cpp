#include <iostream>
using namespace std;

int A(int n){
    
    if (n <= 1){
        return 1;
    }

    return n * A(n - 1);
}

int main(){
    int num = 7;
    int expectedResult = 5040;

    while (!(cin >> num) || num <= 0) {
        cout << "Invalid input! Please enter a natural number: ";
    }
    int result = A(num);

    cout << "Factorial of " << num << " = " << result << endl;

    bool testPassed = result == expectedResult;

    if (testPassed) {
      cout << "TEST SUCCESSFUL" << endl;
        else {
        cout << "TEST UNSUCCESSFUL" << endl;
        }
    }
    
}
