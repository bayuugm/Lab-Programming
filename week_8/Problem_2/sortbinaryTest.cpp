#include <iostream>
#include <string>
using namespace std;

struct Students {
    long long NISN;
    string Nama;
    int Value;
};

void display(Students data[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "NISN:" << data[i].NISN << " ,Nama:" << data[i].Nama << " ,Value:" << data[i].Value << endl;
    }
    cout << endl;
}

void selectionSortNISN(Students data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (data[j].NISN < data[min].NISN) {  
                min = j;
            }
        }
        if (min != i) {
            Students temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    display(data, size);
}

void binarySearch(Students data[], int size) {
    bool found = false;
    int i = 0;
    int j = size - 1;
    long long query = 9950310962;
    int k; 
    while (!found && i <= j){
        k = (i + j) / 2;
        if (data[k].NISN < query){
            i = k + 1;
        } else if (data[k].NISN == query){
            found = true;
        } else{
            j = k - 1;
        }
    }
}

int main() {
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

    selectionSortNISN(data, size);
    binarySearch(data, size);

    if (found) {
        std::cout << "TEST SUCCESSFUL!" << std::endl;
    } else {
        std::cout << "ERROR: TEST UNSUCCESSFUL!" << std::endl;
    }

    return 0;
}
