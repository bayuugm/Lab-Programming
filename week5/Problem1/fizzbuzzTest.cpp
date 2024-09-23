#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<string> result;

    for(int i = 1;i<=100; i++){
        if(i % 3 == 0 && i % 5 == 0)
        {
            result.push_back("FizzBuzz");
        }else if(i % 3 == 0)
        {    
            result.push_back("Fizz");

        }else if(i % 5 == 0)
        {
            result.push_back("Buzz");
        }else
        {
            result.push_back(to_string(i));
            
        }
    }

    for(const string& s : result) {
            cout << s << ",";
    }
return 0;
}

bool testPassed = false;
if(result == expectedOutput) testPassed = True;

if(testPassed) {
  cout << "Test Succesful" << endl;
}else {
  cout << "Test Unsuccesful" << endl;
}
