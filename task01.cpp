#include <iostream>
#include <string>

using namespace std;

void rand_init(int*, int);

int main() {

	int size;
	 
	do {
		cout << "Input your size: ";
		cin >> size;
	} while (size < 2);

	int* array = new int[size];

	rand_init(array, size);

	delete[] array;

	return 0;
}
