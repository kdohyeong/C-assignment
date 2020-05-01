#include "Person.h"

Person::Person(const string& name, int age, const string& gender, const string& job) {
	name_ = name;
	age_ = age;
	gender_ = gender;
	job_ = job;
	
}

void Person::ShowPersonInfo() {
	cout << name_ << "의 나이는 " << age_ << "살이고" << " 성별은 " << gender_ << " 직업은 " << job_ << endl;
}


Student::Student(int sid, double score,int grade, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	student_name_ = name;
	student_id_ = sid;
	student_score_ = score;
	student_grade_ = grade;

}	

void Student::ShowPersonInfo() {
	cout << student_name_ << "의 학번은 " << student_id_ << "이며 학년은 " << student_grade_ << " 학점은 " << student_score_ << endl;
}


Driver::Driver(const string& year, const string& automobile, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	driver_name_ = name;
	driver_gender_ = gender;
	driver_age_ = age;
	driver_year_ = year;
	driver_automobile_ = automobile;
	
}

void Driver::ShowPersonInfo() {
	cout << driver_name_ << " 의 연차는 " << driver_year_ << " 나이는 " << driver_age_ << " 차종은 " << driver_automobile_ << " 성별은 " << driver_gender_ << endl;
}


Employee::Employee(const string& year, const string& cla, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	employee_name_ = name;
	employee_gender_ = gender;
	employee_age_ = age;
	employee_year_ = year;
	employee_cla_ = cla;

}

void Employee::ShowPersonInfo() {
	cout << employee_name_ << " 의 성별 " << employee_gender_ << " 나이는 " << employee_age_ << "이고 년차는 " << employee_year_ << " 직급은 " << employee_cla_ << endl;
}


Developer::Developer(const string& years, const string& work, const string& name, int age, const string& gender, const string& job) : Person(name, age, gender, job) {
	developer_name_ = name;
	developer_gender_ = gender;
	developer_age_ = age;
	developer_year_ = years;
	developer_work_ = work;

}

void Developer::ShowPersonInfo() {
	cout << developer_name_ << " 의 성별 " << developer_gender_ << " 나이는 " << developer_age_ << "이고 년차는 " << developer_year_ << " 업무는 " << developer_work_ << endl;
}








