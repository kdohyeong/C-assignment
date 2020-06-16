#include "head.h"

void Student::ShowPersonInfo()  {
	cout << getJob() << endl
		<< "이름 : " << getName() << endl
		<< "나이 : " << getAge() << endl
		<< "성별 : " << getSex() << endl
		<< "학번 : " << snumber << endl
		<< "학점 : " << score << endl
		<< "학년 : " << grade << endl;
}

void Driver::ShowPersonInfo() {
	cout << getJob() << endl
		<< "이름 : " << getName() << endl
		<< "나이 : " << getAge() << endl
		<< "성별 : " << getSex() << endl
		<< "년차 : " << year << endl
		<< "차 이름 : " << carname << endl;
}

void Employee::ShowPersonInfo() {
	cout << getJob() << endl
		<< "이름 : " << getName() << endl
		<< "나이 : " << getAge() << endl
		<< "성별 : " << getSex() << endl
		<< "년차 : " << year << endl
		<< "직급 : " << position << endl;
}

void Developer::ShowPersonInfo() {
	cout << getJob() << endl
		<< "이름 : " << getName() << endl
		<< "나이 : " << getAge() << endl
		<< "성별 : " << getSex() << endl
		<< "년차 : " << year << endl
		<< "업무 : " << work << endl;
}