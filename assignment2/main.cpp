#include "example.h"

int main() {
	double x1, y1, x2, y2;

	double twopoint_distance_result;
	
	
	

	cout << "ù ��° ��ǥ (x,y) �� x�� �� y�� �� ������� �Է��ϼ���. " << endl;
	cout << "x ��ǥ : ";
	cin >> x1;
	cout << "y ��ǥ : ";
	cin >> y1;

	cout << "�� ��° ��ǥ (x,y) �� x�� �� y�� �� ������� �Է��ϼ���. " << endl;
	cout << "x ��ǥ : ";
	cin >> x2;
	cout << "y ��ǥ : ";
	cin >> y2;

	twopoint_distance_result = twopoint_distance(x1, y1, x2, y2);


	cout << "\n ----- �� �� ���̿� �Ÿ� ���Ŀ� �����ϸ� (" << x1 << "," << y1 << ") �� " 
		 << "(" << x2 << "," << y2 << ") ������ �Ÿ��� [ " << twopoint_distance_result << " ] �Դϴ�. -----\n" << endl;

	return 0;


}