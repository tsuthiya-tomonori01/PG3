#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void DispResult(int* s) {
	

	printf("%dïbë“Ç¡Çƒé¿çsÇ≥ÇÍÇΩÇÊ\n", *s);

}

void setTimeout(PFunc p, int second) {

	Sleep(second * 1000);

	p(&second);
}

int main() {


	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	return 0;
}