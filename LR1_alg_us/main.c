
#include "time.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
	int max = 0;
	int min = 99999;
	int res = 0;
	int size;

	printf("Write size of mass: ");
	scanf_s("%d", &size);

	int* mas = (int*)malloc(size * sizeof(int));

	if (mas == NULL) {
		printf("\nError selections memory\n");
		return 1;
	}

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}

	for (int i = 0; i < size; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	res = max - min;
	printf("\nDifferens between max and min: %d ", res);

	free(mas);

	getchar();
	return 0;
}