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

//��������char�^�̏ꍇ��min�֐����L�q�A���̏ꍇ�֐��e���v���[�g�̃I�[�o�[���C�h���g���Ƃ悢
template <>
char Min(char a, char b)
{
	return printf("�����ȊO�͑���͂ł��܂���");
}

int main()
{
	printf("%d\n", Min<int>(80, 90));
	printf("%f\n", Min<float>(70.0f, 50.0f));
	printf("%f\n", Min<double>(80, 90));
	Min<char>('a', 'b');

	return 0;
}
