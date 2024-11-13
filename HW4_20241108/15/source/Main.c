#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int array[], int size);

int main(void)
{
	int array[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

	printf("Unsorted array:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");

	bubbleSort(array, SIZE);

	printf("Sorted array:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}

void bubbleSort(int array[], int size)
{
	int i, j, temp;
	int swapped;

	for (i = 0; i < size - 1; i++) {
		swapped = 0; // 用於檢查是否有交換發生

		// 每次通過時比較次數減少一
		for (j = 0; j < size - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				// 交換相鄰的元素
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; // 標記發生了交換

				// 印出每次交換後的陣列狀態
				printf("After swapping %d and %d: ", array[j], array[j + 1]);
				for (int k = 0; k < size; k++) {
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}

		// 如果沒有發生交換，陣列已排序完成，提早結束
		if (!swapped) {
			break;
		}
	}
}