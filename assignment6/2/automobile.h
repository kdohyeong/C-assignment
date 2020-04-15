#pragma once

#include<iostream>

using namespace std;

class automobile {
	int fuel_efficiency;
	int current_fuel;
	int count_charge;
	int distance;
	int use_fuel;
public:
	automobile(int fuel_efficiency);
	void fuel_charge();
	void print_fuel();
	void print_count();
	void print_distance();
	void minus_fuel(int distance);
	void plus_distance();
	int get_fuel_efficiency();
};


void race(automobile a1, automobile a2, automobile a3);

void compare(automobile a1, automobile a2, automobile a3);
