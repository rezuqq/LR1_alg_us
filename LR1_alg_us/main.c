
#include "time.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
	int cols, rows;

	printf("Write number of rows: ");
	scanf_s("%d", &rows);

	printf("\nWrite number of cols: ");
	scanf_s("%d", &cols);

	int** mas = (int**)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++){
		mas[i] = (int*)malloc(cols * sizeof(int));
	}
	if (mas == NULL) {
		printf("\nError selections memory\n");
		return 1;
	}

	srand(time(NULL));

	printf("\nMatrix\n");

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mas[i][j] = rand() % 100;
			printf("%d ", mas[i][j]);
		}
		printf("\n");
	}

	printf("\nSumm of rows: ");
	for (int i = 0; i < rows; i++) {
		int sum_row = 0;
		for (int j = 0; j < cols; j++) {
			sum_row += mas[i][j];
		}
		printf("\nRow %d: %d", i + 1, sum_row);
	}

	printf("\n");
	printf("\nSumm of cols: ");
	for (int j = 0; j < cols; j++) {
		int sum_col = 0;
		for (int i = 0; i < rows; i++) {
			sum_col += mas[i][j];
		}
		printf("\nCol %d: %d", j + 1, sum_col);
	}

	for (int i = 0; i < rows; i++) {
		free(mas[i]);
	}

	free(mas);

	getchar();
	return 0;
}