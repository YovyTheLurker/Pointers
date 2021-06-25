// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printNumber(int* numberPtr) {
	cout << *numberPtr << endl;
}
void printLetter(char* letterPtr) {
	cout << *letterPtr << endl;
}
void print(void* ptr, char type) {
	switch (type) {
	case 'i':cout << *((int*)ptr)/*handle int**/ << endl; break;
	case 'c':cout << *((char*)ptr)/*handle char**/ << endl; break;
	}
}
int main()
{//ponters must be of same tyoe as variables
	int n = 5;//create varibla
	cout << &n << endl;//print address
	int* ptr = &n;//assign pointer
	cout << ptr << endl;//print address of original variable value via pointer
	cout << *ptr << endl;//access value of variable through pointer
	*ptr = 10;//change value of variable trought address via pointer(derefferenced)
	cout << *ptr << endl;//prints new value stored on address
//void pointers: especial pointers that can hold veriables of any data type. Limitation:cannot directly dereference this kind of pointer.
	int number = 5;
	char letter = 'a';
	//printNumber(&number);
	//printLetter(&letter);
	print(&number, 'i');
	print(&letter, 'c');




	system("pause>0");
}

