#include <iostream>
#include <string>
using namespace std;

int main(){
  string word, reversed = "";
  cout << "Enter a word: ";
  cin >> word;

  for(int i = word.length() - 1; i >= 0; i--){
    reversed += word[i];
  }

  //check
  if(reversed == word){
    cout << word << " is a palindrome." << endl;
  }else{
    cout << word << " is not a palindrome." << endl;
  }
  
  
}

