#include <iostream>
using namespace std;

int A(int num1, int num2){
    if (num2 == 0){
        return num1;
    }
    return A(num2, num1 % num2);
}

int main(){
    int num1,num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 < 0 || num2 < 0) {
        cout << "error: GCD is undefined for negative numbers." << endl;
    } else if (num1 == 0 && num2 == 0) {
        cout << "error: GCD is undefined when both numbers are zero." << endl;
    } else {
        // Compute and display the GCD
        int result = A(num1, num2);
        cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    }

    return 0;
}