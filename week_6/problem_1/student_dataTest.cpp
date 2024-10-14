#include <iostream>
using namespace std;

struct students {
    float uts;
    float uas;
    float average;
    int nim;
};

int main(){
    int N = 4;

    struct students data[50];
  data[0].nim = 446;
  data[0].uts = 90;
  data[0].uas = 95;
  data[1].nim = 675;
  data[1].uts = 67.8;
  data[1].uas = 71.1;
  data[2].nim = 253;
  data[2].uts = 100;
  data[2].uas = 50;
  data[3].nim = 781;
  data[3].uts = 90.85;
  data[3].uas = 45.9;


    for(int i = 0; i < N;i++){
        data[i].average = (data[i].uts + data[i].uas) / 2;
    }

    cout << "LIST OF STUDENT SCORES" << endl;
    for(int i = 0; i < N;i++){
        cout << "------------" << endl;
        cout << "NIM: " << data[i].nim << endl;
        cout << "AVERAGE: " << data[i].average << endl;
    }

    return 0;
    
}
