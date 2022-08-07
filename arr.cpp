#include "arr.h"

void Array::relocate() {
	if (relloc > 1) {
		int *p = new int[2 * size];
		copy(p);
		size = 2 * size;
		delete[] pointer;
		pointer = p;
	}
	else {
		int* p = new int[2 * size];
		copy(p);
		size = 2 * size;
		pointer = p;
		relloc++;
	}
}

void Array::push_back(int value) {
	if (index < size) {
		pointer[index] = value;
		index++;
	}
	else {
		relocate();
		pointer[index] = value;
		index++;
	}
}

void Array::set(int index_, int value) {
	pointer[index_] = value;
}

int Array::get(int index_) {
	return pointer[index_];
}

void Array::copy(int *p) {
	for (int i = 0; i < size; i++) {
		p[i] = pointer[i];
	}
}
int& Array::operator[](int index)
{
	if (index >= size) {
		std::cout << "Array index out of bound, exiting";
		exit(0);
	}
	return pointer[index];
}


Array::Array() :
	size(10),
	index(0),
	relloc(0),
	pointer (&primordial[0])
{};