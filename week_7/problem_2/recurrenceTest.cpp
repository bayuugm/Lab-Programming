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
    
    int result = A(num);

    cout << "Factorial of " << num << " = " << result << endl;

    bool testPassed = (result == expectedResult);

    if (testPassed) {
        std::cout << "TEST SUCCESSFUL!" << std::endl;
    } else {
        std::cout << "ERROR: TEST UNSUCCESSFUL!" << std::endl;
        }
        std::cout << std::endl;

    return 0;
    
}
