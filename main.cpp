#include <stdio.h>
#include "Monster1.h"
#include "Monster2.h"

int main() {

	printf("�o��\n");
	Base* Cars[2];

	Cars[0] = new Monster1;
	Cars[1] = new Monster2;

	printf("\n���\n");

	Cars[0]->Born();
	Cars[1]->Born();

	printf("\n������\n");
	for (int i = 0; i < 2; i++) {

		delete Cars[i];
	}

	return 0; }