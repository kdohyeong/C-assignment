#include "header.h"


string change_string(string line1) {

	string result;
	string line2[] = { "a" , "c" , "h" };
	string line3[] = { "b" , "d" , "i" };

	for (int i = 0; i < 3; i++) {
		string c_line2 = line2[i];
		string c_line3 = line3[i];

		while (1) {
			if (line1.find(c_line2) != string::npos) {

				line1.insert(line1.find(c_line2), c_line3);
				line1.erase(line1.find(c_line2), 1);

				result = line1;
			}
			else
				break;
		}
	}
	return result;
}


string find_str(string result) {

	string str = result;
	
	string r_str;
	
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i]) != 0) {
			r_str.push_back((str[i]));
		}
		else if (isspace(str[i]) != 0) {
			r_str.push_back((str[i]));
		}
		else if (ispunct(str[i]) != 0) {
			r_str.insert(r_str.length(), " ");
		}
	}
	return r_str;
}

string find_num(string result) {

	string str = result;
	string num = "";
	string r_str;

	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i]) != 0) {
			num.push_back((str[i]));
			}
		}
		return "\n" + num;
	}

string sort(string v, string n) {

	istringstream iss(v);
	string token;
	vector<string> vec;
	string r_token;
	string result;

	while (getline(iss, token, ' '))
	{
		r_token = token;
		if (r_token.empty() == 0) {
			vec.push_back(r_token);
		}
	}

	sort(vec.begin(), vec.end());

	vec.push_back(n);
	string size = to_string(vec.size());

	cout << "\n--------------------------------\n"
		<< "output.txt에 저장할 내용입니다."
		<< "\n--------------------------------\n"
		<< size << "개\n";
		
	for (int i = 0; i < vec.size(); i++) {
		cout <<  vec[i] << " ";
		result += vec[i];
		result += " ";
	}
	cout << "\n\n";

	return size + "개\n" + result;
}

string read() {

	ifstream read("input.txt");
	string line;

	while (getline(read, line)) {
		cout << "\n-------------------------------------\n"
			<< "input.txt 파일에서 읽어온 문자입니다."
			<< "\n-------------------------------------\n" << line
			<< endl;
	}

	read.close();

	return line;
}

string write(string result) {

	string line2;
	ofstream write;
	write.open("output.txt");
	write.write(result.c_str(), result.size());
	write.close();

	return line2;
}