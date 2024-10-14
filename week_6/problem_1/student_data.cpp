#include <iostream>
using namespace std;

struct students {
    float uts;
    float uas;
    float average;
    int nim;
};

int main(){
    int N;

    cout << "Enter The amount of Students: ";
    cin >> N;

    if(i > 50){
        cout << "Maximum amount of students is 50, re-enter amount of students: ";
        cin >> N;
    }

    struct students data[50];

    for(int i = 0; i < N;i++){
        cout << "Enter the data of student " << i+1 << endl;
        cout << "Enter NIM: ";
        cin >> data[i].nim;
        cout << "UTS Score: ";
        cin >> data[i].uts;
        cout << "UAS Score: ";
        cin >> data[i].uas;

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
