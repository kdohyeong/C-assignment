#include "Subject.h"


int main() {

	int count = 0;
	Subject p[100];

	ifstream read("input.txt");
	string line;

	while (getline(read, line)) {
		p[count].split(line , count);
		count++;
	}

	cout << "Ãâ·Â : \n";
	for (int i=0; i< count; i++) {
		p[i].output();
	}
	
}

