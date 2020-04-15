#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Subject {
	private:
		int grade;
		string classification;
		string sub_num;
		string sub_name;
		int class_num;
		int score;

	public:
		void split(string line, int count);
		void output();
	
};
