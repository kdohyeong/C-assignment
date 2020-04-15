#include "example2.h"

double twopoint_distance(double x1, double y1, double x2, double y2) {

	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

}
double sum_length(double a, double b, double c) {

	return (a + b + c) / 2;
}

double surface_area(double a, double b, double c, double s) {

	return sqrt(s * (s - a) * (s - b) * (s - c));

}

double twopoint_inclination(double x1, double y1, double x2, double y2) {
	
	return (x1 - x2) / (y1 - y2);

}

