
#include <stdio.h>
#include <stdbool.h>

/* function protoypes */

void func1();
void func2();
void func3();
void func4();

int main() {
	
	func1();
	func2();
	func3();
	func4();
	return 0;
}

/* function inplementation */
void func1() {
	printf("func1\n");
	return;
}

void func2() {
	printf("func2\n\n");
	return;
	printf("new text\n");
	return;
}

void func3() {
	printf("func3\n");
	func4();
	return;
}

void func4() {
	printf("func4\n");
	return;
	printf("new text 4\n\n");
	return;
}

