#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void DispResult(int* s) {
	
	printf("%d�b�҂��Ď��s���ꂽ��\n", *s);
}

void setTimeout(PFunc p, int second) {

	Sleep(second * 1000);
	p(&second);
}

int main() {


	srand((unsigned int)time(nullptr));

	int dice = rand() % 6 + 1;

	int userAnswer = 0;
	printf("�����������\�z����A�����Ȃ�@0, ��Ȃ�1����͂��Ă�������");
	scanf_s("%d", &userAnswer);

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	if (dice % 2 == userAnswer) 
	{
		printf("����\n");
	} 
	else 
	{
		printf("�s����\n");
	}

	return 0;
}