#include "smart.h"

int main() {

	unique_ptr<automobile> a1(new automobile(12));
	shared_ptr<automobile> a2(new automobile(15));
	shared_ptr<automobile> a3(new automobile(17));


	race(a1, a2, a3);

	compare(a1, a2, a3);

}