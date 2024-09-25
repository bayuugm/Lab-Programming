#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Error: Size of the vector should be positive." << std::endl;
        return 0;
    }

    std::vector<int> a(n);
    std::cout << "Enter the numbers for the array: ";

    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i]; 
    }

    bool check = true;
    for (int i = 0; i < n; i++) {
        if(a[i] <= 0 ) {
            check = false;
            break;
        }
    } 

    if (check == false) {
        std::cout << "Error: enter a positive integer" << std::endl;
        return 0;
    }else{

    }std::cout << "Array: ";
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
