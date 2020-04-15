#include "header.h"


STUDENT* p = new STUDENT[100];




int main() {

		int choice = 0;
		int count = 0;

		ifstream read("input.txt");
		string line;

		while (getline(read, line)) {
			split(line, count, p);
			count++;
		}

		case_switch(choice, count, p);

		delete[] p;

}

