#include <stdio.h>

template <typename Type>

Type Min(Type a, Type b) {
	if (a < b)
	{
		return static_cast<Type>(a);
	}
	else
	{
		return static_cast<Type>(b);
	}
}

//ここからchar型の場合のmin関数を記述、その場合関数テンプレートのオーバーライドを使うとよい
template <>
char Min(char a, char b)
{
	return printf("数字以外は代入はできません");
}

int main()
{
	printf("%d\n", Min<int>(80, 90));
	printf("%f\n", Min<float>(70.0f, 50.0f));
	printf("%f\n", Min<double>(80, 90));
	Min<char>('a', 'b');

	return 0;
}
