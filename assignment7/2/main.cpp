#pragma once

#include<iostream>
#include <string>


using namespace std;

template <typename T>
T sum(T const& a, T const& b) {
	return a + b;
}

int main(void) {

	string str1 = "apple", str2 = "banana";

	cout << sum(1, 2) << endl;

	cout << sum(1.1, 2.2) << endl;

	cout << sum(str1, str2) << endl;

	return 0;

}