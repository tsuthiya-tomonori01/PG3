#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

//typedef void (*PFunc)(int*);
//
//void DispResult(int* s) {
//	
//	
//}

void setTimeout(std::function<void(int*)>p, int &second) {

	p(&second);
	Sleep(second * 1000);
}

int main() {

	std::function<void(int*)> fx = [](int* s) { printf("%d�b�҂��Ď��s���ꂽ��\n", *s); };

	srand((unsigned int)time(nullptr));

	int dice = rand() % 6 + 1;

	int userAnswer = 0;
	int time = 3;

	printf("�����������\�z����A�����Ȃ�@0, ��Ȃ�1����͂��Ă�������");
	scanf_s("%d", &userAnswer);

	//PFunc p;
	//p = DispResult;
	setTimeout(fx, time);

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