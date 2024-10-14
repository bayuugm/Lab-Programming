#include <iostream>
using namespace std;

struct students {
    float uts;
    float uas;
    float average;
    int nim;
};

int main(){
    int i = 4
    const int max = 50;

    struct students data[max];
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


    for(int j = 0; j < i;j++){
        data[j].average = (data[j].uts + data[j].uas) / 2;
    }

    for(int j = 0; j < i;j++){
        cout << "LIST OF STUDENT SCORES:" << endl;
        cout << "NIM: " << data[j].nim << "\t" << "AVERAGE: " << data[j].average << endl;
    }


    return 0;
    
}
