#include <iostream>
#include <string>
using namespace std;

struct Students {
    long long NISN;
    string Nama;
    int Value;
};

void sequentialSearch(Students data[], int size){
    bool found = false;
    int query = 60;
    for(int i = 0; i < size; i++){
        if(data[i].Value == query){
            data[i].Nama = "Joko";
            found = true;
        }
    }
    if(!found){
        cout << "Not Found";
    }

}

void display(Students data[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "NISN:" << data[i].NISN << " ,Nama:" << data[i].Nama << " ,Value:" << data[i].Value << endl;
    }
    cout << endl;
}

int main(){
    Students data[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    int size = sizeof(data) / sizeof(data[0]);

    sequentialSearch(data,size);
    display(data,size);

}