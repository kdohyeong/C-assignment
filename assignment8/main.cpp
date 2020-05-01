#include "Person.h"

int main() {
	Student hong(2013040008, 3.3, 3, "hong", 20, "남자" , "의적");
	Driver kim("7년차", "포르쉐", "kim", 34, "남자", "백수");
	Employee sin("6년차","과장", "sin", 32, "여자", "프로그래머");
	Developer park("3년차","개발", "park", 28, "남자", "개발자");

	hong.Student::ShowPersonInfo();
	kim.Driver::ShowPersonInfo();
	sin.Employee::ShowPersonInfo();
	park.Developer::ShowPersonInfo();
	

	return 0;

}