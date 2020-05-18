#pragma once

#include<iostream>
#include <memory>

using namespace std;

class automobile {
	int fuel_efficiency;
	int current_fuel;
	int count_charge;
	int distance;
	int use_fuel;
public:
	automobile(int fuel_efficiency);
	auto fuel_charge();
	auto print_fuel();
	auto print_count();
	auto print_distance();
	auto minus_fuel(int distance);
	auto plus_distance();
	auto get_fuel_efficiency();
};


void race(unique_ptr<automobile> &a1, shared_ptr<automobile> a2, shared_ptr<automobile> a3);

void compare(unique_ptr<automobile> &a1, shared_ptr<automobile> a2, shared_ptr<automobile> a3);