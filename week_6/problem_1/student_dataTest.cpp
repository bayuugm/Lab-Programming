#include <iostream>
using namespace std;

struct students {
	float uts;
	float uas;
	float average;
	int nim;
};

int main() {
	int N = 4;

	struct students data[N];
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


	for(int i = 0; i < N; i++) {
		data[i].average = (data[i].uts + data[i].uas) / 2;
	}

	struct students expectedData[N];
	expectedData[0].nim = 446;
	expectedData[0].uts = 90;
	expectedData[0].uas = 95;
	expectedData[0].average = 92.5;
	expectedData[1].nim = 675;
	expectedData[1].uts = 67.8;
	expectedData[1].uas = 71.1;
	expectedData[1].average = 69.45;
	expectedData[2].nim = 253;
	expectedData[2].uts = 100;
	expectedData[2].uas = 50;
	expectedData[2].average = 75;
	expectedData[3].nim = 781;
	expectedData[3].uts = 90.85;
	expectedData[3].uas = 45.9;
	expectedData[3].average = 68.375;

	bool testPassed = true
	for (int i=0; i < N; i++){
		if (data[i].nim != expectedData[i].nim || data[i].uts != expectedData[i].uts || data[i].uas != expectedData[i].uas || data[i].average != expectedData[i].average) {
			testPassed = false;
			break;
		}
	}
			

    if (testPassed) {
        std::cout << "TEST SUCCESSFUL!" << std::endl;
    } else {
        std::cout << "ERROR: TEST UNSUCCESSFUL!" << std::endl;
    }

return 0;

}
