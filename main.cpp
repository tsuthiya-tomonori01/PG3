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

	std::function<void(int*)> fx = [](int* s) { printf("%d秒待って実行されたよ\n", *s); };

	srand((unsigned int)time(nullptr));

	int dice = rand() % 6 + 1;

	int userAnswer = 0;
	int time = 3;

	printf("奇数か偶数化を予想する、偶数なら　0, 奇数なら1を入力してください");
	scanf_s("%d", &userAnswer);

	//PFunc p;
	//p = DispResult;
	setTimeout(fx, time);

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