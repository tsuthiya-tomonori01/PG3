#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void DispResult(int* s) {
	
	printf("%d秒待って実行されたよ\n", *s);
}

void setTimeout(PFunc p, int second) {

	Sleep(second * 1000);
	p(&second);
}

int main() {


	srand((unsigned int)time(nullptr));

	int dice = rand() % 6 + 1;

	int userAnswer = 0;
	printf("奇数か偶数化を予想する、偶数なら　0, 奇数なら1を入力してください");
	scanf_s("%d", &userAnswer);

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	if (dice % 2 == userAnswer) 
	{
		printf("正解\n");
	} 
	else 
	{
		printf("不正解\n");
	}

	return 0;
}