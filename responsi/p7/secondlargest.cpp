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
