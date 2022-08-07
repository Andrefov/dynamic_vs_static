#include "arr.h"


int main() {

	Array myArr;

	for (int i = 0; i < 60; i++) { 
		myArr.push_back(i);
	}

	for (int i = 0; i < 60; i++) {
		myArr.get(i);
	}
	std::cout << myArr[10] << std::endl;
	std::cout << myArr[100] << std::endl;
}