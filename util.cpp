#include <iostream>
#include <string>

using namespace std;

void rand_init(int* array, int size) {
	for (int j = 0; j < size; j++) {
		array[j] = rand() % 10;
	}

}



string output(int* array, int size) {
	string msg = "";

	for (int j = 0; j < size; j++) {
		msg += to_string(array[j]) + " ";
	}


	return msg;
}

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
