
#include "time.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
	int max = 0;
	int min = 99999;
	int res = 0;
	int mas[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	res = max - min;
	printf("\n%d ", res);

	getchar();
	return 0;
}