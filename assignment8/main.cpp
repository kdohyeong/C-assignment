#include "Person.h"

int main() {
	Student hong(2013040008, 3.3, 3, "hong", 20, "����" , "����");
	Driver kim("7����", "������", "kim", 34, "����", "���");
	Employee sin("6����","����", "sin", 32, "����", "���α׷���");
	Developer park("3����","����", "park", 28, "����", "������");

	hong.Student::ShowPersonInfo();
	kim.Driver::ShowPersonInfo();
	sin.Employee::ShowPersonInfo();
	park.Developer::ShowPersonInfo();
	

	return 0;

}