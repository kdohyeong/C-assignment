#include<iostream>
using namespace std;

class Person abstract{
	string name;
	int age;
	string sex;
	string job;
public:
	Person(string name, int age, string sex, string job) {
		this->name = name; this->age = age; this->sex = sex; this->job = job;
	}
	string getName() { return name; }
	int getAge(){ return age; }
	string getSex() { return sex; }
	string getJob() { return job; }
	virtual void ShowPersonInfo() = 0;
};
class Student : public Person {
	int snumber;
	int score;
	int grade;
public:
	Student(string name, int age, string sex, int snumber, int score, int grade) : Person(name, age, sex, "학생") {
		this->snumber = snumber;
		this->score = score;
		this->grade = grade;
	}
	void ShowPersonInfo() override;
};
class Driver :public Person {
	int year;
	string carname;
public:
	Driver(string name, int age, string sex, int year, string carname) : Person(name, age, sex,"드라이버") {
		this->year = year;
		this->carname = carname;
	}
	void ShowPersonInfo() final;
};

class Employee : public Person {
	int year;
	string position;
public:
	Employee(string name, int age, string sex, int year, string position) : Person(name, age, sex, "직장인") {
		this->year = year; this->position = position;
	}
	void ShowPersonInfo() final;
};

class Developer : public Person {
	int year;
	string work;
public:
	Developer(string name, int age, string sex, int year, string work) : Person(name , age , sex , "개발자") {
		this->year = year;
		this->work = work;
	}
	void ShowPersonInfo() final;
};
