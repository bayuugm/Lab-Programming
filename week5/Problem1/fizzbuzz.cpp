#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> result;

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
            result.push_back(std::to_string(i));
            
        }
    }

    for(const std::string& s : result) {
            std::cout << s << " ";
    }
return 0;
}
