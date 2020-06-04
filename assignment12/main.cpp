#include<iostream>

using namespace std;

void cbv_swap(int x, int y);
void cba_swap(int* x, int* y);
void cbr_swap(int& x, int& y);

// call by value
void cbv_swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

//call by address
void cba_swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;

}

//call by reference
void cbr_swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;

}

// 복사 생성자 & 복사 대입 연산자 클래스
class Copy {
public:
	Copy();
	Copy(const Copy& rhs);
	Copy& operator=(const Copy& rhs);
	bool value(Copy rhs);
	bool reference(const Copy& rhs);
	bool address(const Copy* rhs);
};

Copy::Copy() {
	cout << "생성자" << endl;
}

Copy::Copy(const Copy& rhs) {
	cout << "복사 생성자" << endl;
}

Copy& Copy::operator=(const Copy& rhs) {
	cout << "복사 대입 연산자" << endl;
	return *this;
}

bool Copy::value(Copy copy) {
	cout << "call by value 에 의한 호출" << endl;
	return true;
}

bool Copy::reference(const Copy& copy) {
	cout << "call by reference 에 의한 호출" << endl;
	return true;
}

bool Copy::address(const Copy* copy) {
	cout << "call by address 에 의한 호출" << endl;
	return true;
}

void main() {
	int a = 10;
	int b = 20;
	cout << "CALL BY VALUE" << endl;
	cout << "before : " << a << "     " << b << endl;
	cbv_swap(a, b);
	cout << "after  : " << a << "     " << b << endl;

	cout << "CALL BY ADDRESS" << endl;
	cout << "before : " << a << "     " << b << endl;
	cba_swap(&a, &b);
	cout << "after  : " << a << "     " << b << endl;

	int c = 10;
	int d = 20;
	cout << "CALL BY REFERENCE" << endl;
	cout << "before : " << c << "     " << d << endl;
	cbr_swap(c, d);
	cout << "after  : " << c << "     " << d << endl << endl;

	// 생성자를 만듬
	cout << "생성자를 만듬 ->  ";
	Copy constructor;
	cout << endl;

	//복사 생성자 직접 호출
	cout << "복사 생성자 직접 호출 ->  ";
	Copy copy_constructor(constructor);
	cout << endl;

	//대입 연산자로 복사 생성자를 호출
	cout << "대입 연산자로 복사 생성자를 호출 ->  ";
	Copy copy_constructor2 = constructor;
	cout << endl;

	//생성자 호출 후 -> 복사 대입 연산자 호출
	cout << "생성자 호출 후 복사 대입 연산자 호출 ->  ";
	copy_constructor = constructor;
	cout << endl;

	//값에 의한 복사생성자 호출 
	cout << "call by value 복사생성자 호출 ->  ";
	constructor.value(copy_constructor);
	cout << endl;

	//참조에 의한 복사 생성자 호출
	cout << "call by reference 복사생성자 호출 ->  " << endl;
	constructor.reference(copy_constructor);
	cout << endl;

	//주소에 의한 복사 생성자 호출 
	cout << "call by address 복사생성자 호출 ->  " << endl;
	constructor.address(&copy_constructor);
	cout << endl;

}