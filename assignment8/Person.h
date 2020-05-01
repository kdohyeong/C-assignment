#pragma once

#include<iostream>

using namespace std;

class Person
{
private:
	string name_;
	int age_;
	string gender_;
	string job_;

public:
	Person(const string& name, int age, const string& gender, const string& job);
	void ShowPersonInfo();

};

class Student : public Person {
private:
	string student_name_;
	int student_id_;
	double student_score_;
	int	student_grade_;
public:
	Student(int sid, double score, int grade, const string& name, int age, const string& gender, const string& job);
	void ShowPersonInfo();

};

class Driver : public Person {
private:
	string driver_name_;
	string driver_gender_;
	int driver_age_;
	string driver_year_;
	string driver_automobile_;
	
public:
	Driver(const string& year, const string& automobile, const string& name, int age, const string& gender, const string& job);
	void ShowPersonInfo();


};

class Employee : public Person {
private:
	string employee_name_;
	string employee_gender_;
	int employee_age_;
	string employee_year_;
	string employee_cla_;
public:
	Employee(const string& year, const string& cla, const string& name, int age, const string& gender, const string& job);
	void ShowPersonInfo();

};

class Developer : public Person {
private:
	string developer_name_;
	string developer_gender_;
	int developer_age_;
	string developer_year_;
	string developer_work_;
	
public:
	Developer(const string& years, const string& work, const string& name, int age, const string& gender, const string& job);
	void ShowPersonInfo();


};