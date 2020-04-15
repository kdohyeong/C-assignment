#include "automobile.h"

automobile::automobile(int fuel_efficiency) {
	distance = 0;
	this->fuel_efficiency = fuel_efficiency;
	current_fuel = 100;
	count_charge = 0;
	use_fuel = 0;
}

void automobile::fuel_charge() {
	current_fuel = 100;
}

void automobile::print_fuel() {
	cout << "���� �⸧ �� : " << current_fuel << "  ";
	cout << "��� �⸧ �� : " << use_fuel << "  ";
}


void automobile::print_distance() {
	cout << "�̵��Ÿ� : " << distance << "  ";
}
void automobile::plus_distance() {
	distance++;
}
void automobile::print_count() {
	cout << "���� ���� Ƚ�� : " << count_charge << endl;
}
void automobile::minus_fuel(int distance) {
	if (distance % fuel_efficiency == 0) {
		current_fuel--;
		use_fuel++;
	}

	if (current_fuel == 0) {
		fuel_charge();
		count_charge++;
	}

}
int automobile::get_fuel_efficiency() {
	return fuel_efficiency;
}

void race(automobile a1, automobile a2, automobile a3) {
	int distance = 1;
	while (distance <= 4500) {
		a1.plus_distance();
		a2.plus_distance();
		a3.plus_distance();

		a1.minus_fuel(distance);
		a2.minus_fuel(distance);
		a3.minus_fuel(distance);
		if (distance % 1000 == 0 || distance == 4500) {

			cout << "*************************** ���� �̵� �Ÿ� : [" << distance << "] *******************************" << endl;
			cout << "================================= a1 ���� ========================================" << endl;
			a1.print_distance();
			a1.print_fuel();
			a1.print_count();
			cout << "----------------------------------------------------------------------------------" << endl;
			cout << "================================= a2 ���� ========================================" << endl;
			a2.print_distance();
			a2.print_fuel();
			a2.print_count();
			cout << "----------------------------------------------------------------------------------" << endl;
			cout << "================================= a3 ���� ========================================" << endl;
			a3.print_distance();
			a3.print_fuel();
			a3.print_count();
			cout << "----------------------------------------------------------------------------------" << endl << endl << endl;
		}
		distance++;
	}
}


void compare(automobile a1, automobile a2, automobile a3) {
	if (a1.get_fuel_efficiency() > a2.get_fuel_efficiency() && a1.get_fuel_efficiency() > a3.get_fuel_efficiency())
		cout << "<<<<<<<<<<<<<<<< ����� ���� ���� ���� << a1 >> �Դϴ� ! >>>>>>>>>>>>>>>>>>>>>";
	if (a2.get_fuel_efficiency() > a1.get_fuel_efficiency() && a2.get_fuel_efficiency() > a3.get_fuel_efficiency())
		cout << "����� ���� ���� ���� a2 �Դϴ� ! ";
	if (a3.get_fuel_efficiency() > a2.get_fuel_efficiency() && a3.get_fuel_efficiency() > a1.get_fuel_efficiency())
		cout << "<<<<<<<<<<<<<<<< ����� ���� ���� ���� << a3 >> �Դϴ� ! >>>>>>>>>>>>>>>>>>>>>" << endl << endl;
}