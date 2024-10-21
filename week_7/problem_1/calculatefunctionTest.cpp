#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

int main() {
    float num1 = 5;
    float num2 = 10;
    float result;
    char operation = +;
    float expectedResult = 15;

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
