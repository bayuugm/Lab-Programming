#include <iostream>
#include <vector>

int main() {
    std::vector<int> a(5); 
    std::cout << "Enter 5 numbers for the array: ";

    
    for (int i = 0; i < 5; i++) {
        std::cin >> a[i]; 
    }

    bool check = true;
    for (int i = 0; i < 5; i++) {
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
    for (int i = 0; i <5; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Reversed Array: ";
    for (int i = 4; i >= 0; i--){
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
