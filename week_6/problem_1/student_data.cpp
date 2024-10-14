#include <iostream>
using namespace std;

struct students {
    float uts;
    float uas;
    float average;
    int nim;
};

int main(){
    int i;
    const int max = 50;

    cout << "Enter The amount of Students: ";
    cin >> i;

    if(i > max){
        cout << "Maximum amount of students is 50, re-enter amount of students: ";
        cin >> i;
    }

    struct students data[max];

    for(int j = 0; j < i;j++){
        cout << "Enter the data of student " << j+1 << endl;
        cout << "Enter NIM: ";
        cin >> data[j].nim;
        cout << "UTS Score: ";
        cin >> data[j].uts;
        cout << "UAS Score: ";
        cin >> data[j].uas;

        data[j].average = (data[j].uts + data[j].uas) / 2;
    }

    for(int j = 0; j < i;j++){
        cout << "LIST OF STUDENT SCORES:" << endl;
        cout << "NIM: " << data[j].nim << "\t" << "AVERAGE: " << data[j].average << endl;
    }


    return 0;
    
}