#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[100]; 
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int secondLargest = -1; 
    
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest; 
            largest = numbers[i];    
        } else if (numbers[i] > secondLargest && numbers[i] < largest) {
            secondLargest = numbers[i]; 
        }
    }

    cout << "The second largest number is: " << secondLargest <<  endl;
    
    return 0;
}

//This program finds the second largest number in a list of integers entered by the user. 
//It first prompts the user to enter the number of elements, n, and then takes n integers as input into an array called numbers. 
//The program initializes largest to the first element of the array and secondLargest to -1. 
//It then iterates through the rest of the array: if a number is greater than largest, it updates secondLargest to the previous value of 
//largest and assigns the new number to largest. Otherwise, if the number is greater than secondLargest but less than largest, 
//it updates secondLargest to the current number. After completing the loop, it prints the value of secondLargest, which holds the second largest number in the array.







