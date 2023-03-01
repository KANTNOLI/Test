#include "main.h"
#include <string>
#include "logic.h"


int find_max_index(int* array, int size) {
	int max = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[max] < array[i]) {
			max = i;
		}
	}

	return max;
}


int find_max_index(int* array, int size) {
	int min = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[min] > array[i]) {
			min = i;
		}
	}

	return min;
}
