#include "header.h"

int main() {


	string line = read();

	string r_text1 = change_string(line);

	string v = find_str(r_text1);

	string n = find_num(r_text1);

	string result = sort(v, n);

	write(result);

	return 0;
}




