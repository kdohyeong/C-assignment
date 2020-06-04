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

// ���� ������ & ���� ���� ������ Ŭ����
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
	cout << "������" << endl;
}

Copy::Copy(const Copy& rhs) {
	cout << "���� ������" << endl;
}

Copy& Copy::operator=(const Copy& rhs) {
	cout << "���� ���� ������" << endl;
	return *this;
}

bool Copy::value(Copy copy) {
	cout << "call by value �� ���� ȣ��" << endl;
	return true;
}

bool Copy::reference(const Copy& copy) {
	cout << "call by reference �� ���� ȣ��" << endl;
	return true;
}

bool Copy::address(const Copy* copy) {
	cout << "call by address �� ���� ȣ��" << endl;
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

	// �����ڸ� ����
	cout << "�����ڸ� ���� ->  ";
	Copy constructor;
	cout << endl;

	//���� ������ ���� ȣ��
	cout << "���� ������ ���� ȣ�� ->  ";
	Copy copy_constructor(constructor);
	cout << endl;

	//���� �����ڷ� ���� �����ڸ� ȣ��
	cout << "���� �����ڷ� ���� �����ڸ� ȣ�� ->  ";
	Copy copy_constructor2 = constructor;
	cout << endl;

	//������ ȣ�� �� -> ���� ���� ������ ȣ��
	cout << "������ ȣ�� �� ���� ���� ������ ȣ�� ->  ";
	copy_constructor = constructor;
	cout << endl;

	//���� ���� ��������� ȣ�� 
	cout << "call by value ��������� ȣ�� ->  ";
	constructor.value(copy_constructor);
	cout << endl;

	//������ ���� ���� ������ ȣ��
	cout << "call by reference ��������� ȣ�� ->  " << endl;
	constructor.reference(copy_constructor);
	cout << endl;

	//�ּҿ� ���� ���� ������ ȣ�� 
	cout << "call by address ��������� ȣ�� ->  " << endl;
	constructor.address(&copy_constructor);
	cout << endl;

}