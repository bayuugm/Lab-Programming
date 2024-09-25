#include <iostream>
#include <vector>

int main() {
    int n = 5

    std::vector<int> a(n) = {1, 2, 3, 4, 5,};
    std::vector<int> expectedOutput = Array: 1 2 3 4 5
Reversed Array: 5 4 3 2 1

    std::cout << "Array: ";
    for (int i = 0; i <n; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Reversed Array: ";
    for (int i = n-1; i >= 0; i--){
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    bool testPassed = (result == expectedOutput);

    if (testPassed) {
        std::cout << "TEST SUCCESSFUL!" << std::endl;
    } else {
        std::cout << "ERROR: TEST UNSUCCESSFUL!" << std::endl;
        }
        std::cout << std::endl;
    
    return 0;
}
