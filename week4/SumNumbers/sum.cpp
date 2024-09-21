#include <iostream>
using namespace std;

int main(){
    int n,sum;
    sum = 0;

    cout << "Enter a Natural Number: ";
    cin >> n;

    if(n <= 0){
        cout << "error: please enter a positive integer!" << endl;
    }
    else{
        for (int i = 1; i <= n; ++i) {
            sum += i;
            if(i == 1){
                cout << i;
            }else{
                cout << " + " << i;
            }
            
        }
        cout << " = " << sum << endl;

        cout << "Sum: " << sum << endl;
        
    }

return 0;

}
