#include "Person.h"

Person::Person(const string& name, int age, const string& gender, const string& job) {
	name_ = name;
	age_ = age;
	gender_ = gender;
	job_ = job;
	
}

void Person::ShowPersonInfo() {
	cout << name_ << "�� ���̴� " << age_ << "���̰�" << " ������ " << gender_ << " ������ " << job_ << endl;
}


Student::Student(int sid, double score,int grade, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	student_name_ = name;
	student_id_ = sid;
	student_score_ = score;
	student_grade_ = grade;

}	

void Student::ShowPersonInfo() {
	cout << student_name_ << "�� �й��� " << student_id_ << "�̸� �г��� " << student_grade_ << " ������ " << student_score_ << endl;
}


Driver::Driver(const string& year, const string& automobile, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	driver_name_ = name;
	driver_gender_ = gender;
	driver_age_ = age;
	driver_year_ = year;
	driver_automobile_ = automobile;
	
}

void Driver::ShowPersonInfo() {
	cout << driver_name_ << " �� ������ " << driver_year_ << " ���̴� " << driver_age_ << " ������ " << driver_automobile_ << " ������ " << driver_gender_ << endl;
}


Employee::Employee(const string& year, const string& cla, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	employee_name_ = name;
	employee_gender_ = gender;
	employee_age_ = age;
	employee_year_ = year;
	employee_cla_ = cla;

}

void Employee::ShowPersonInfo() {
	cout << employee_name_ << " �� ���� " << employee_gender_ << " ���̴� " << employee_age_ << "�̰� ������ " << employee_year_ << " ������ " << employee_cla_ << endl;
}


Developer::Developer(const string& years, const string& work, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	developer_name_ = name;
	developer_gender_ = gender;
	developer_age_ = age;
	developer_year_ = years;
	developer_work_ = work;

}

void Developer::ShowPersonInfo() {
	cout << developer_name_ << " �� ���� " << developer_gender_ << " ���̴� " << developer_age_ << "�̰� ������ " << developer_year_ << " ������ " << developer_work_ << endl;
}








