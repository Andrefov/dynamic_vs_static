#pragma once
#include <iostream>
class Array {
private:
	int *pointer;
	int size;
	int relloc;
	int index;
	int primordial[10];
	void relocate();
	void copy(int *p);
	
public:
	void push_back(int value);
	void set(int index, int value);
	int get(int index);
	int& operator[](int);
	Array();
};