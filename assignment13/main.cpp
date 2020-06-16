#include"head.h"

int main() {
	Student s("박땡땡", 24, "巢", 2016038014, 18, 2);
	Driver D("이땡땡", 24, "巢", 4, "SM7");
	Employee E("김땡땡", 24, "咯", 2, "措府");
	Developer De("유떙땡", 24, "咯", 3, "焊救");

	s.ShowPersonInfo();
	cout << endl;
	D.ShowPersonInfo();
	cout << endl;
	E.ShowPersonInfo();
	cout << endl;
	De.ShowPersonInfo();
}
