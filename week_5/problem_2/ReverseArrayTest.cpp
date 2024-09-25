#include <iostream>
#include <vector>

int main() {
    int n = 5

    std::vector<int> a(5) = {1, 2, 3, 4, 5,};
    
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
