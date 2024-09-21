#include <iostream>
using namespace std; //to avoid repeating the std::

int getInput(string prompt){ //get the input from the user
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

void displayResult(int a, int b, int c, int largest){ //function to display the results
    if (a >= b && a >= c) { //check if a is the largest, if true then set largest = a
        largest = a;
    }else if(b >= a && b >= c){ //check if b is the largest, if true then set largest = b
        largest = b;
    }else { //check if c is the largest, if true then set largest = c
        largest = c;
    }
    cout << "The largest number is = " << largest << endl; //print the largest number in the output after checking
}

int main(){ //asking the user for input and declaring the variables a,b,c as integers.
    int a = getInput("Enter the value of x = ");
    int b = getInput("Enter the value of y = ");
    int c = getInput("Enter the value of z = ");
    int largest;
    displayResult(a,b,c,largest);

    return 0;
}
