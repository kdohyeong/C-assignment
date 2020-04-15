#include "header.h"



string split(string v, int count, STUDENT *p) {

		istringstream iss(v);
		string token;
		vector<string> vec;
		string result;

		while (getline(iss, token, ','))
		{
			if (token.empty() == 0) {
				vec.push_back(token);
			}
		}
			
			const char* vec_0 = vec[0].c_str();
			string vec_1 = vec[1];
			int vec_2 = atoi(vec[2].c_str());

			strcpy_s(p[count].grade, vec_0);
			p[count].subject = vec_1;
			p[count].score = vec_2;

			return p[count].grade;

	}


int add(int count, STUDENT* p) {

	string grade_;
	string subject_;
	string score_;

	cout << "�߰��� ����� : ";
	cin >> subject_;
	string subject__ = subject_;
	p[count].subject = subject__;

	cout << "�߰��� �г� : ";
	cin >> grade_;
	const char* grade__ = grade_.c_str();
	strcpy_s(p[count].grade, grade__);


	cout << "�߰��� ���� : ";
	cin >> score_;
	int score__ = atoi(score_.c_str());
	p[count].score = score__;

	count++;

	cout << "�߰��� ���� ��� : ";
	for (int k = 0; k < count; k++) {
		cout << " " << p[k].subject << " " << " < " << p[k].grade << " > " << " < " << p[k].score << " >\n";
	}
	return count;
}

int search_g(int count, STUDENT* p) {

	string grade_;

	cout << "�˻� �� �г� : " << endl;
	cin >> grade_;

	for (int i = 0; i <= count; i++) {
		string grade_1 = p[i].grade;

		if (grade_1 == grade_) {
			cout  << p[i].subject << " < " << p[i].grade << " > < " << p[i].score << " > \n";
		}
	}
	return count;

}


int search_sub(int count, STUDENT* p) {

	string subject_;

	cout << "�˻� �� ���� �� : " << endl;
	cin >> subject_;
	string subject__ = subject_;

	for (int i = 0; i <= count; i++) {

		if (p[i].subject == subject__) {
			cout << p[i].subject << " < " << p[i].grade << " > < " << p[i].score << " > \n";
		}
	}
	return count;

}


int search_s(int count, STUDENT* p) {

	string score_;

	cout << "�˻� �� ���� : " << endl;
	cin >> score_;
	int score__ = atoi(score_.c_str());

	for (int i = 0; i <= count; i++) {

		if (p[i].score == score__) {

			cout << p[i].subject << " < " << p[i].grade << " >  < " << p[i].score << " > \n";
		}
	}
	return count;
}


int sub_delete(int count, STUDENT* p) {

	cout << "���� ��� : \n";
	for (int k = 0; k < count; k++) {
		cout << " " << p[k].subject << " " << "< " << p[k].grade << " > " << " < " << p[k].score << " >\n";
	}
	string sub_;
	
	cout << "\n������ ���� ���� �Է��ϼ��� : " << endl;
	cin >> sub_;
	string sub__ = sub_;
	string scor = "";
	int sco = atoi(scor.c_str());

	for (int i = 0; i < count; i++) {
		if (p[i].subject == sub__) {
			for (int j = i; j < count - 1; j++) {

				p[j].subject = p[j + 1].subject;
				p[j].score = p[j + 1].score;
				strcpy_s(p[j].grade, p[j + 1].grade);
				}
			
			p[count - 1].subject = "";
			p[count - 1].score = sco;
			strcpy_s(p[count - 1].grade, "");

			count--;
			i--;
			}
		
		}
	cout << "\n";
	for (int k = 0; k < count; k++) {
		cout << " " << p[k].subject << " " << " < " << p[k].grade << " > " << " < " << p[k].score << " >\n";
	}
	return count;
}


int case_switch(int choice, int count, STUDENT* p) {

	while (1) {

		cout << "1.���� �߰�  2.���� ����  3.�г� �� �˻�  4.���� �� �˻�  5.���� �� �˻�  6.����" << endl;
		cin >> choice;

		switch (choice) {

		case 1: add(count, p);   	break;
			count = add(count, p);

		case 2: sub_delete(count, p);    break;

		case 3: search_g(count, p);		break;

		case 4: search_sub(count, p);	break;
			count = search_sub(count, p);

		case 5: search_s(count, p);	break;

		case 6: exit(0);

		}
	}
}
