#include "Uni.h"


void inputUni() {

	setlocale(LC_ALL, "korean");

	//OxAC00(=44032) ~ 0xD7A3(=55203)

	string c;

		cout << "----- 16���� unicode�� �ѱ� ������ OxAC00(44032) ~ 0xD7A3(55203) �Դϴ� -----\n\n";
		cout << "�ѱ۷� ��ȯ�� 16������ �Է��ϼ���.\n";
		cout << "�Է� ->  ";

		cin >> c;

		char const* pchar = c.c_str();

		const char* s2 = pchar;
		unsigned long n2 = strtoul(s2, NULL, 16);

		cout << "�Է��Ͻ� 16������ 10������ ��ȯ�ϸ� " << n2 << " �Դϴ�.\n";

		if (n2 < 44032 || n2 > 55204) {
			cout << "�ѱ��� ������ �ƴմϴ�.\n";
		}

		int a[] = { n2 };

		cout << "�Է��Ͻ� 16������ unicode�� �ѱ۷� ǥ���ϸ� ";
		wprintf(L"[ %s ] ", a);
		cout << " �Դϴ�.\n\n";

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

		cout << "1.16������ �Է¹޾� �ѱ۷� ǥ���ϱ�  2.�����ڵ��� ��~�ϱ��� ǥ��  3.���α׷� ����" << endl;
		cin >> choice;

		switch (choice) {

		case 1: inputUni();	break;

		case 2: showUni(); break;

		case 3: exit(0);
		}
	}
}
