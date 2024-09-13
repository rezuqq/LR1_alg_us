
#include "time.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
	int max = 0;
	int min = 99999;
	int res = 0;
	int mas[10] = { 1, 3, 5, 7, 10, 33, 54, 8, 9, 11 };
	for (int i = 0; i < 10; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	res = max - min;
	printf("%d %d \n", min, max);
	printf("%d ", res);

	getchar();
	return 0;
}