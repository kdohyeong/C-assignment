#include<stdio.h>
#include<math.h>

int main() {

	int i, j, k;
	int num, time = 0, count = 0;
	int arr[10000], index = 0;
	int sw = 0;

	scanf_s("%d", &num);

	for (i = 2; i <= num; i++) {

		if (i != 2 && i % 2 == 0)
			continue;

		for (j = 2; j <= sqrt((double)i); j++) {

			if (j % 2 == 0)
				continue;

			++count;

			if (index != 0) {
				for (k = 0; k < index; k++) {
					if (i%arr[k] == 0) {
						time++;
						sw = 1;
						break;
					}
					}
				}
				if (sw == 1) {
					sw = 0;
					break;
				}
			}
			if (time == 0) {

				printf("%d ", i);
				if (count == 0)
					count++;
				arr[index] = i;
				index++;
			}
			time = 0;
		}
		printf("\n나머지 연산 횟수 : %d\n", count);

		return 0;


	
}