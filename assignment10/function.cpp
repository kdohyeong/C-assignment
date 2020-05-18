#include "smart.h"

automobile::automobile(int fuel_efficiency) {
	distance = 0;
	this->fuel_efficiency = fuel_efficiency;
	current_fuel = 100;
	count_charge = 0;
	use_fuel = 0;
}

auto automobile::fuel_charge() {
	current_fuel = 100;
}

auto automobile::print_fuel() {
	cout << "현재 기름 양 : " << current_fuel << "  ";
	cout << "사용 기름 양 : " << use_fuel << "  ";
}


auto automobile::print_distance() {
	cout << "이동거리 : " << distance << "  ";
}
auto automobile::plus_distance() {
	distance++;
}
auto automobile::print_count() {
	cout << "현재 주유 횟수 : " << count_charge << endl;
}
auto automobile::minus_fuel(int distance) {
	if (distance % fuel_efficiency == 0) {
		current_fuel--;
		use_fuel++;
	}

	if (current_fuel == 0) {
		fuel_charge();
		count_charge++;
	}

}
auto automobile::get_fuel_efficiency() {
	return fuel_efficiency;
}

void race(unique_ptr<automobile>& a1, shared_ptr<automobile> a2, shared_ptr<automobile> a3) {
	int distance = 1;
	while (distance <= 4500) {
		a1->plus_distance();
		a2->plus_distance();
		a3->plus_distance();

		a1->minus_fuel(distance);
		a2->minus_fuel(distance);
		a3->minus_fuel(distance);
		if (distance % 1000 == 0 || distance == 4500) {

			cout << "*************************** 현재 이동 거리 : [" << distance << "] *******************************" << endl;
			cout << "================================= a1 정보 ========================================" << endl;
			a1->print_distance();
			a1->print_fuel();
			a1->print_count();
			cout << "----------------------------------------------------------------------------------" << endl;
			cout << "================================= a2 정보 ========================================" << endl;
			a2->print_distance();
			a2->print_fuel();
			a2->print_count();
			cout << "----------------------------------------------------------------------------------" << endl;
			cout << "================================= a3 정보 ========================================" << endl;
			a3->print_distance();
			a3->print_fuel();
			a3->print_count();
			cout << "----------------------------------------------------------------------------------" << endl << endl << endl;
		}
		distance++;
	}
}


void compare(unique_ptr<automobile>& a1, shared_ptr<automobile> a2, shared_ptr<automobile> a3) {
	if (a1->get_fuel_efficiency() > a2->get_fuel_efficiency() && a1->get_fuel_efficiency() > a3->get_fuel_efficiency())
		cout << "<<<<<<<<<<<<<<<< 연료비가 가장 좋은 차는 << a1 >> 입니다 ! >>>>>>>>>>>>>>>>>>>>>";
	if (a2->get_fuel_efficiency() > a1->get_fuel_efficiency() && a2->get_fuel_efficiency() > a3->get_fuel_efficiency())
		cout << "연료비가 가장 좋은 차는 a2 입니다 ! ";
	if (a3->get_fuel_efficiency() > a2->get_fuel_efficiency() && a3->get_fuel_efficiency() > a1->get_fuel_efficiency())
		cout << "<<<<<<<<<<<<<<<< 연료비가 가장 좋은 차는 << a3 >> 입니다 ! >>>>>>>>>>>>>>>>>>>>>" << endl << endl;
}
