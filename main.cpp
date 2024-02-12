#include <stdio.h>
#include "Monster1.h"
#include "Monster2.h"

int main() {

	printf("oŒ»\n");
	Base* Cars[2];

	Cars[0] = new Monster1;
	Cars[1] = new Monster2;

	printf("\nŽã‚é\n");

	Cars[0]->Born();
	Cars[1]->Born();

	printf("\n“¦‚°‚é\n");
	for (int i = 0; i < 2; i++) {

		delete Cars[i];
	}

	return 0; }