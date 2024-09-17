#include <iostream>
using namespace std;

int getInput(string prompt){
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

void displayResult(int a, int b, int c, int largest){
    if (a >= b && a >= c) {
        largest = a;
    }else if(b >= a && b >= c){
        largest = b;
    }else {
        largest = c;
    }
    cout << "The largest number is = " << largest << endl;
}

int main(){
    int a = getInput("Enter the value of x= ");
    int b = getInput("Enter the value of y= ");
    int c = getInput("Enter the value of z= ");
    int largest;
    displayResult(a,b,c,largest);

    return 0;
}