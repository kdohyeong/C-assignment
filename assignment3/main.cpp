#include "example2.h"

int main() {
	double x1 , y1 , x2 , y2 , x3 , y3;
	double a , b , c , s;
	double T_surface_area;
	double m1 , m2;


	while (true) {

		cout << "첫 번째 좌표 (x,y) 의 x값 과 y값 을 순서대로 입력하세요. (종료 : Ctrl + z) " << endl;
		cout << "x 좌표 : ";
		cin >> x1;
		cout << "y 좌표 : ";
		cin >> y1;

		
		if (cin.eof()) {
			break;
		}

		cout << "두 번째 좌표 (x,y) 의 x값 과 y값 을 순서대로 입력하세요. (종료 : Ctrl + z) " << endl;
		cout << "x 좌표 : ";
		cin >> x2;
		cout << "y 좌표 : ";
		cin >> y2;

		if (cin.eof()) {
			break;
		}

		cout << "세 번째 좌표 (x,y) 의 x값 과 y값 을 순서대로 입력하세요. (종료 : Ctrl + z) " << endl;
		cout << "x 좌표 : ";
		cin >> x3;
		cout << "y 좌표 : ";
		cin >> y3;


		if (cin.eof()) {
			break;
		}


		a = twopoint_distance(x1, y1, x2, y2);
		b = twopoint_distance(x2, y2, x3, y3);
		c = twopoint_distance(x1, y1, x3, y3);

		s = sum_length(a, b, c);

		T_surface_area = surface_area(a, b, c, s);
		m1 = twopoint_inclination(x1, y1, x2, y2);
		m2 = twopoint_inclination(x1, y1, x3, y3);


		cout << "\n --A-- 두 점 사이에 거리 공식에 대입하면 (" << x1 << "," << y1 << ") 와 " << "(" << x2 << "," << y2 
			 << ") 사이의 거리 a는 [ " << a << " ] 입니다. -----\n" << endl;

		cout << " --B-- 두 점 사이에 거리 공식에 대입하면 (" << x2 << "," << y2 << ") 와 " << "(" << x3 << "," << y3 
			 << ") 사이의 거리 b는 [ " << b << " ] 입니다. -----\n" << endl;

		cout << " --C-- 두 점 사이에 거리 공식에 대입하면 (" << x1 << "," << y1 << ") 와 " << "(" << x3 << "," << y3 
			 << ") 사이의 거리 c는 [ " << c << " ] 입니다. -----\n" << endl;

		if (m1 == m2) {

			cout << " --X-- 입력한 세 점이 한 직선사이에 존재하기 떄문에 삼각형이 될수 없습니다. -----\n" << endl;
		}
		else if (x1 == x2 && y1 == y2) {
		
			cout << " --X-- 입력한 좌표 중 첫 번째 좌표 (" << x1 << "," << y1 << ") 와 " << "두 번째 좌표 (" 
				 << x2 << "," << y2 << ") 두 점이 동일한 좌표 이므로 삼각형이 될 수 없습니다. -----\n" << endl;
		}
		else if (x1 == x3 && y1 == y3) {

			cout << " --X-- 입력한 좌표 중 첫 번째 좌표 (" << x1 << "," << y1 << ") 와 " << "세 번째 좌표 (" 
				 << x3 << "," << y3 << ") 두 점이 동일한 좌표 이므로 삼각형이 될 수 없습니다. -----\n" << endl;
		}
		else if (x2 == x3 && y2 == y3) {

			cout << " --X-- 입력한 좌표 중 두 번째 좌표 (" << x2 << "," << y2 << ") 와 " << "세 번째 좌표 (" 
				 << x3 << "," << y3 << ") 두 점이 동일한 좌표 이므로 삼각형이 될 수 없습니다. -----\n" << endl;
		}


		else {

			cout << " --S-- 세 점 (" << x1 << "," << y1 << ") , " << "(" << x2 << "," << y2 << ") , " 
				 << "(" << x3 << "," << y3 << ") 을 꼭지점으로 하는 삼각형의 넓이는 헤론의 공식에 의해 [ " 
				 << T_surface_area << " ] 입니다. -----\n\n" << endl;

		}
	}
	return 0;


}
