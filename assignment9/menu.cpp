#include "Uni.h"


void inputUni() {

	setlocale(LC_ALL, "korean");

	//OxAC00(=44032) ~ 0xD7A3(=55203)

	string c;

		cout << "----- 16진수 unicode의 한글 범위는 OxAC00(44032) ~ 0xD7A3(55203) 입니다 -----\n\n";
		cout << "한글로 변환할 16진수를 입력하세요.\n";
		cout << "입력 ->  ";

		cin >> c;

		char const* pchar = c.c_str();

		const char* s2 = pchar;
		unsigned long n2 = strtoul(s2, NULL, 16);

		cout << "입력하신 16진수를 10진수로 변환하면 " << n2 << " 입니다.\n";

		if (n2 < 44032 || n2 > 55204) {
			cout << "한글의 범위가 아닙니다.\n";
		}

		int a[] = { n2 };

		cout << "입력하신 16진수의 unicode를 한글로 표현하면 ";
		wprintf(L"[ %s ] ", a);
		cout << " 입니다.\n\n";

}


void showUni() {

	setlocale(LC_ALL, "korean");

	string c[] = {"AC00", "B098", "B2E4" , "B77C" , "B9C8" , "BC14" , "C0AC" , "C544",
				  "C790", "CC28", "CE74", "D0C0", "D30C", "D558" };

	cout << "\n";

	for (int i = 0; i < 14; i++) {
		char const* pchar = c[i].c_str();

		const char* s2 = pchar;
		unsigned long n2 = strtoul(s2, NULL, 16);

		int a[] = { n2 };

		wprintf(L"[ %s ] \n", a);

	}
	cout << "\n";
}


int case_switch() {

	int choice;

	while (1) {

		cout << "1.16진수를 입력받아 한글로 표현하기  2.유니코드의 가~하까지 표출  3.프로그램 종료" << endl;
		cin >> choice;

		switch (choice) {

		case 1: inputUni();	break;

		case 2: showUni(); break;

		case 3: exit(0);
		}
	}
}
