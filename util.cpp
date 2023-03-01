#include "main.h"
#include <string>
#include "util.h"

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

