#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

int main() {
    float num1, num2, result;
    char operation;

    
    cout << "Enter operation (+ or -): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (operation == '+') {
        result = add(num1, num2);
        cout << "Result: " << result << endl;
    } else if (operation == '-') {
        result = subtract(num1, num2);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}