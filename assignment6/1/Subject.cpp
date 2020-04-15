#include "Subject.h"



void Subject::split(string v, int count) {

	istringstream iss(v);
	string token;
	vector<string> vec;


	while (getline(iss, token, ','))
	{
		if (token.empty() == 0) {
			vec.push_back(token);
		}
	}
	
	grade = atoi(vec[0].c_str());
	classification = vec[1];
	sub_num = vec[2];
	sub_name = vec[3];
	class_num = atoi(vec[4].c_str());
	score = atoi(vec[5].c_str());

}


void Subject::output() {

	cout << " " << grade << " " << classification << " " << sub_num << " " << sub_name << " " << class_num << " " << score << " \n";
	
}