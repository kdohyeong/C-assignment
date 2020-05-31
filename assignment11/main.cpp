#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	//디폴트 생성자
	NUMBOX() { }

	NUMBOX(int num1, int num2) : num1(num1), num2(num2) { }

	void ShowNumber()
	{
		cout << "num1: " << num1 << ", num2: " << num2 << endl;
	}
	// + 연산자 오버로딩
	NUMBOX operator+(NUMBOX& ref)
	{
		return NUMBOX(num1 + ref.num1, num2 + ref.num2);
	}
	NUMBOX operator+(int num)
	{
		return NUMBOX(num1 + num, num2 + num);
	}
	// - 연산자 오버로딩
	NUMBOX operator-(NUMBOX& ref)
	{
		return NUMBOX(num1 - ref.num1, num2 - ref.num2);
	}
	NUMBOX operator- (int num) {
		return NUMBOX(num1 - num, num2 - num);
	}
	// * 연산자 오버로딩
	NUMBOX operator*(NUMBOX& ref)
	{
		return NUMBOX(num1 * ref.num1, num2 * ref.num2);
	}
	NUMBOX operator* (int num) {
		return NUMBOX(num1 * num, num2 * num);
	}
	// "/" 연산자 오버로딩
	NUMBOX operator/(NUMBOX& ref)
	{
		return NUMBOX(num1 / ref.num1, num2 / ref.num2);
	}
	NUMBOX operator/ (int num) {
		return NUMBOX(num1 / num, num2 / num);
	}
	// % 연산자 오버로딩 
	NUMBOX operator%(NUMBOX& ref)
	{
		return NUMBOX(num1 % ref.num1, num2 % ref.num2);
	}
	NUMBOX operator% (int num) {
		return NUMBOX(num1 % num, num2 % num);
	}
	// ^ 연산자 오버로딩
	NUMBOX operator^(NUMBOX& ref)
	{
		return NUMBOX(num1^ref.num1, num2^ref.num2);
	}
	NUMBOX operator^ (int num) {
		return NUMBOX(num1^num, num2^num);
	}

	//전위 ++ 오버로딩
	NUMBOX operator++()
	{
		num1 += 1;
		num2 += 1;
		return *this;
	}
	//후위 ++ 오버로딩
	NUMBOX operator++(int)
	{
		NUMBOX temp(*this);
		num1 += 1;
		num2 += 1;
		return temp;
	}
	//전위 -- 오버로딩
	NUMBOX operator--()
	{
		num1 -= 1;
		num2 -= 1;
		return *this;
	}
	//후위 -- 오버로딩
	NUMBOX operator--(int)
	{
		NUMBOX temp(*this);
		num1 -= 1;
		num2 -= 1;
		return temp;
	}


	//FRIEND 키워드를 이용하여 전역 함수를 오버로딩 
	friend NUMBOX operator+(int num, NUMBOX ref);

	friend NUMBOX operator-(int num, NUMBOX ref);

	friend NUMBOX operator*(int num, NUMBOX ref);

	friend NUMBOX operator/(int num, NUMBOX ref);

	friend NUMBOX operator%(int num, NUMBOX ref);

	friend NUMBOX operator^(int num, NUMBOX ref);

};

//전역 += 함수 
NUMBOX operator+(int num, NUMBOX ref)
{
	ref.num1 += num;
	ref.num2 += num;

	return ref;
}
//전역 -= 함수
NUMBOX operator-(int num, NUMBOX ref)
{
	ref.num1 -= num;
	ref.num2 -= num;

	return ref;
}
//전역 *= 함수
NUMBOX operator*(int num, NUMBOX ref)
{
	ref.num1 *= num;
	ref.num2 *= num;

	return ref;
}
//전역 /= 함수
NUMBOX operator/(int num, NUMBOX ref)
{
	ref.num1 /= num;
	ref.num2 /= num;

	return ref;
}
//전역 %= 함수
NUMBOX operator%(int num, NUMBOX ref)
{
	ref.num1 %= num;
	ref.num2 %= num;

	return ref;
}
//전역 ^= 함수
NUMBOX operator^(int num, NUMBOX ref)
{
	ref.num1 ^= num;
	ref.num2 ^= num;

	return ref;
}


//<< , >> 오버로딩
class Point {
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPoint() const { cout << '[' << xpos << ", " << ypos << ']' << endl; }
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

istream& operator>>(istream& is, Point& pos)
{
	is >> pos.xpos >> pos.ypos;
	return is;
}

//cout , cin , endl 오버로딩
namespace mystd
{
	using namespace std;

	class ostream
	{
	public:
		ostream& operator<< (const char* str)
		{
			printf("%s 오버로딩", str);
			return *this;
		}
		ostream& operator<< (char str)
		{
			printf("%c", str);
			return *this;
		}
		ostream& operator<< (int num)
		{
			printf("%d 오버로딩", num);
			return *this;
		}
		ostream& operator<< (double e)
		{
			printf("%g", e);
			return *this;
		}
		ostream& operator<< (ostream& (*fp)(ostream& ostm))          
		{
			return fp(*this);
		}
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}

	ostream cout;
}

int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX nb2(5, 2);
	NUMBOX nb3;
	NUMBOX nb4;

	NUMBOX result = nb1 + nb2;
	NUMBOX result2 = nb1 - nb2;
	NUMBOX result3 = nb1 * nb2;
	NUMBOX result4 = nb1 / nb2;
	NUMBOX result5 = nb1 % nb2;
	NUMBOX result6 = nb1^nb2;

	NUMBOX result7 = 10 + nb1 + 40;

	NUMBOX result8 = 10 - nb1 - 40;

	NUMBOX result9 = 10 * nb1 * 40;

	NUMBOX result10 = 10 / nb1 / 40;

	NUMBOX result11 = 10 % nb1 % 40;

	NUMBOX result12 = 3 ^ nb1 ^ 4;
	

	nb1.ShowNumber();
	nb2.ShowNumber();

	result.ShowNumber();
	result2.ShowNumber();
	result3.ShowNumber();
	result4.ShowNumber();
	result5.ShowNumber();
	result6.ShowNumber();
	result7.ShowNumber();
	result8.ShowNumber();
	result9.ShowNumber();
	result10.ShowNumber();
	result11.ShowNumber();
	result12.ShowNumber();

	nb3 = nb1;
	nb3.ShowNumber();
	nb1.ShowNumber();

	nb3 = nb1++;
	nb3.ShowNumber();
	nb1.ShowNumber();

	nb3 = ++nb1;
	nb3.ShowNumber();
	nb1.ShowNumber();

	nb4 = nb2--;
	nb4.ShowNumber();
	nb2.ShowNumber();

	nb4 = --nb2;
	nb4.ShowNumber();
	nb2.ShowNumber();

	Point pos(1, 2);
	cout << pos << endl;

	Point pos1;
	cin >> pos1;
	cout << pos1;

	Point pos2;
	cin >> pos2;
	cout << pos2;

	using mystd::cout;
	using mystd::endl;

	cout << "Simple" << endl << 3333 << endl;

	return 0;
}
