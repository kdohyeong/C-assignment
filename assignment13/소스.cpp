#include "head.h"

void Student::ShowPersonInfo()  {
	cout << getJob() << endl
		<< "�̸� : " << getName() << endl
		<< "���� : " << getAge() << endl
		<< "���� : " << getSex() << endl
		<< "�й� : " << snumber << endl
		<< "���� : " << score << endl
		<< "�г� : " << grade << endl;
}

void Driver::ShowPersonInfo() {
	cout << getJob() << endl
		<< "�̸� : " << getName() << endl
		<< "���� : " << getAge() << endl
		<< "���� : " << getSex() << endl
		<< "���� : " << year << endl
		<< "�� �̸� : " << carname << endl;
}

void Employee::ShowPersonInfo() {
	cout << getJob() << endl
		<< "�̸� : " << getName() << endl
		<< "���� : " << getAge() << endl
		<< "���� : " << getSex() << endl
		<< "���� : " << year << endl
		<< "���� : " << position << endl;
}

void Developer::ShowPersonInfo() {
	cout << getJob() << endl
		<< "�̸� : " << getName() << endl
		<< "���� : " << getAge() << endl
		<< "���� : " << getSex() << endl
		<< "���� : " << year << endl
		<< "���� : " << work << endl;
}