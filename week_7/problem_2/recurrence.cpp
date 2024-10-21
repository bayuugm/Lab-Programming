#include <iostream>
using namespace std;

int A(int n){
    
    if (n <= 1){
        return 1;
    }

    return n * A(n - 1);
}

int main(){
    int num;

    cout << "Enter the number: ";

    while (!(cin >> num) || num <= 0) {
        cout << "Invalid input! Please enter a natural number: ";
    }
    int result = A(num);

    cout << "Factorial of " << num << " = " << result << endl;

    
}