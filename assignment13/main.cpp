#include"head.h"

int main() {
	Student s("박땡땡", 24, "남", 2016038014, 18, 2);
	Driver D("김땡땡", 24, "남", 4, "SM7");
	Employee E("유땡땡", 24, "여", 2, "대리");
	Developer De("이땡땡", 24, "여", 3, "보안");

	s.ShowPersonInfo();
	cout << endl;
	D.ShowPersonInfo();
	cout << endl;
	E.ShowPersonInfo();
	cout << endl;
	De.ShowPersonInfo();
}
