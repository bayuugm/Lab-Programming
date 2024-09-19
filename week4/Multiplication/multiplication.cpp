#include <iostream>
using namespace std;

int main(){
    int n,result;

    cout << "Enter a number: ";
    cin >> n;

    if(n <= 0){
        cout << "error: please enter a positive integer!" << endl;
    }else {
        for(int i = 1; i <= 10; i++){
            result = n*i;
            cout << n << " x " << i << " = " << result << endl;
        }
    }
    return 0;
}