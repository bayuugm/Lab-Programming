#include <iostream>
#include <vector>

int main() {
    int n = 5;  

    std::vector<int> a = {1, 2, 3, 4, 5};  
    std::vector<int> expectedArrayOutput = {1, 2, 3, 4, 5};
    std::vector<int> expectedReverseOutput = {5, 4, 3, 2, 1};

    std::cout << "Array: ";
    std::vector<int> resultArray;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
        Array.push_back(a[i]);  
    }

    std::cout << std::endl;

    std::cout << "Reversed Array: ";
    std::vector<int> resultReverseArray;
    for (int i = n - 1; i >= 0; i--) {
        std::cout << a[i] << " ";
        resultReverseArray.push_back(a[i]);  
    }

    std::cout << std::endl;

    bool testPassed = (resultArray == expectedArrayOutput && resultReverseArray == expectedReverseOutput);

    if (testPassed) {
        std::cout << "TEST SUCCESSFUL!" << std::endl;
    } else {
        std::cout << "ERROR: TEST UNSUCCESSFUL!" << std::endl;
    }

    return 0;
}
