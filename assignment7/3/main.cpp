#pragma once

#include<iostream>
#include <string>


using namespace std;

template <typename T>
void Swap(T& t1, T& t2) {
	T temp;
	temp = t1;
	t1 = t2;
	t2 = temp;
}


void Swap(int a[], int b[])
{
	int temp[5];
	int i;

	for (i = 0; i < sizeof(a); i++)
	{
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
}


int main() {

	int num1 = 1, num2 = 2;
	cout << "Swap ���� �� num1 : " << num1 << " / Swap ���� �� num2 : " << num2 << endl;
	Swap(num1, num2);
	cout << "Swap ���� �� num1 : " << num1 << " / Swap ���� �� num2 : " << num2 << endl << endl;

	double dou1 = 1.12, dou2 = 2.23;
	cout << "Swap ���� �� double1 : " << dou1 << " / Swap ���� �� double2 : " << dou2 << endl;
	Swap(dou1, dou2);
	cout << "Swap ���� �� double1 : " << dou1 << " / Swap ���� �� double2 : " << dou2 << endl << endl;

	
	string str1 = "abc", str2 = "def";
	cout << "Swap ���� �� string1 : " << str1 << " / Swap ���� �� string2 : " << str2 << endl;
	Swap(str1, str2);
	cout << "Swap ���� �� string1 : " << str1 << " / Swap ���� �� string2 : " << str2 << endl << endl;


	char cha1 = 'a' , cha2 = 'b';
	cout << "Swap ���� �� char1 : " << cha1 << " / Swap ���� �� char2 : " << cha2 << endl;
	Swap(cha1, cha2);
	cout << "Swap ���� �� char1 : " << cha1 << " / Swap ���� �� char2 : " << cha2 << endl << endl;

	float flo1 = 0.56f, flo2 = 0.25f;
	cout << "Swap ���� �� float1 : " << flo1 << " / Swap ���� �� float2 : " << flo2 << endl;
	Swap(flo1, flo2);
	cout << "Swap ���� �� float1 : " << flo1 << " / Swap ���� �� float2 : " << flo2 << endl << endl;
	
	int a[] = { 1,2,3 }, b[] = { 4,5,6 };

	cout << "Swap ���� �� a[] : { " << a[0] << "," << a[1] << "," << a[2] 
		 << " } / Swap ���� �� b[] : { " <<  b[0] << "," << b[1] << "," << b[2] << " }" << endl;
	Swap(a, b);
	cout << "Swap ���� �� a[] : { " << a[0] << "," << a[1] << "," << a[2]
		<< " } / Swap ���� �� b[] : { " << b[0] << "," << b[1] << "," << b[2] << " }" << endl;
	return 0;

}