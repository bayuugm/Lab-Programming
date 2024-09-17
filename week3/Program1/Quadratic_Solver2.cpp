#include <iostream>
#include <cmath> //this command  is used so we can use the square root function in the code (sqrt()) to calculate the roots
using namespace std; //to avoid repeating the use of std::

//get the input from the user 
int getInput(std::string prompt ) {
    double value; //using the double variable so that the calculations are more accurate, and avoid errors when using decimals
    cout << prompt;
    cin >> value;
    return value;
}
//displaying the results of the calculation, will display a different output depending on the determinant 
void displayResult(double num1, double num2, double num3, double discriminant) {
    if (discriminant > 0) { //if the discriminant is positive
        double x1 = (-num2 + sqrt(discriminant)) / (2 * num1);
        double x2 = (-num2 - sqrt(discriminant)) / (2 * num1);
        cout << "x1 and x2 are real and distinct." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) { //if the discriminant is = 0
        double x = -num2 / (2 * num1);
        cout << "x1 and x2 are real and equal." << endl;
        cout << "x = " << x << endl;
    } else { //if the dicriminant is negative
        cout << "x1 and x2 are imaginary." << endl;
    }
}
//asking the user to input the coefficients and declaring the variables 
int main() {
    double num1 = getInput("Enter the value of A: ");
    double num2 = getInput("Enter the value of B: ");
    double num3 = getInput("Enter the value of C: ");
    double discriminant = num2 * num2 - 4 * num1 * num3; //calculating the discriminant 
    displayResult(num1, num2, num3, discriminant);

    return 0;
}
