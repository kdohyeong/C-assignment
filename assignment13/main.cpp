#include"head.h"

int main() {
	Student s("�ڶ���", 24, "��", 2016038014, 18, 2);
	Driver D("�趯��", 24, "��", 4, "SM7");
	Employee E("������", 24, "��", 2, "�븮");
	Developer De("�̶���", 24, "��", 3, "����");

	s.ShowPersonInfo();
	cout << endl;
	D.ShowPersonInfo();
	cout << endl;
	E.ShowPersonInfo();
	cout << endl;
	De.ShowPersonInfo();
}