#include <iostream>
#include <vector>

int main() {
    int n = 5

    std::vector<int> a(n) = {1, 2, 3, 4, 5,};

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

    return 0;
}
