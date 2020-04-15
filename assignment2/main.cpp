#include "example.h"

int main() {
	double x1, y1, x2, y2;

	double twopoint_distance_result;
	
	
	

	cout << "첫 번째 좌표 (x,y) 의 x값 과 y값 을 순서대로 입력하세요. " << endl;
	cout << "x 좌표 : ";
	cin >> x1;
	cout << "y 좌표 : ";
	cin >> y1;

	cout << "두 번째 좌표 (x,y) 의 x값 과 y값 을 순서대로 입력하세요. " << endl;
	cout << "x 좌표 : ";
	cin >> x2;
	cout << "y 좌표 : ";
	cin >> y2;

	twopoint_distance_result = twopoint_distance(x1, y1, x2, y2);


	cout << "\n ----- 두 점 사이에 거리 공식에 대입하면 (" << x1 << "," << y1 << ") 와 " 
		 << "(" << x2 << "," << y2 << ") 사이의 거리는 [ " << twopoint_distance_result << " ] 입니다. -----\n" << endl;

	return 0;


}