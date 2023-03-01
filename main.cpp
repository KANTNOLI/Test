#include "main.h"
#include "util.h"
#include "logic.h"

int main() {

	int size;
	 
	do {
		cout << "Input your size: ";
		cin >> size;
	} while (size < 2);

	int* array = new int[size];

	rand_init(array, size);

	cout << output(array, size) << endl;

	delete[] array;

	return 0;
}
