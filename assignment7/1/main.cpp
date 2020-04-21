#pragma once

#include<iostream>
#include <string>


using namespace std;

template <typename T>
T sum(T const& a, T const& b) {
	return a + b;
}

int main() {
	
	string str1 = "apple", str2 = "banana";

	cout << sum<int>(1, 2) << endl;

	cout << sum<double>(1.1, 2.2) << endl;

	cout << sum<string>(str1, str2) << endl;

	return 0;

}