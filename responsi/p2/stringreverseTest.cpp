#include <iostream>
#include <string>
using namespace std;

int main() {
    string reversed;
    string str = "bayu"; 

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    cout << "Reversed: " << reversed << endl;
    string expectedResult = "uyab";

    if (expectedResult == reversed) {
        cout << "TEST SUCCESSFUL!" << endl;
    } else {
        cout << "TEST UNSUCCESSFUL!" << endl;
    }

    return 0;
}
