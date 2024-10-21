#include <iostream>
using namespace std;

int A(int num1, int num2){
    if (num2 == 0){
        return num1;
    }
    return A(num2, num1 % num2);
}

int main(){
    int num1 = 10;
    int num2 = 5;
    int result;
    int expectedResult = 5;

    if (num1 < 0 || num2 < 0) {
        cout << "error: GCD is undefined for negative numbers." << endl;
    } else if (num1 == 0 && num2 == 0) {
        cout << "error: GCD is undefined when both numbers are zero." << endl;
    } else {
        result = A(num1, num2);
        cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    }
  
    bool testPassed = (result == expectedResult);

    if (testPassed) {
        std::cout << "TEST SUCCESSFUL!" << std::endl;
    } else {
        std::cout << "ERROR: TEST UNSUCCESSFUL!" << std::endl;
        }
        std::cout << std::endl;
    
    return 0;
}
