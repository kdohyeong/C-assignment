#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;


typedef struct student {
	char grade[20];
	string subject;
	int score;
} STUDENT;

string split(string v, int count, STUDENT* p);

int add(int count, STUDENT* p);

int search_g(int count, STUDENT* p);

int search_sub(int count, STUDENT* p);

int search_s(int count, STUDENT* p);

int sub_delete(int count, STUDENT* p);

int case_switch(int choice, int count, STUDENT* p);
