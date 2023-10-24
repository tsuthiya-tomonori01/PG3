#include <stdio.h>

int Recursive(int n, int m) {

	m--;

	if (m <= 0)
	{
		return (n);
	}

	return (n + Recursive(n * 2 - 50, m));

}

int main()
{
	int t = 0;
	int e = 1072;

	int m = 8;
	int n = 100;
	int result;

	t = m * e;

	result = Recursive(n, m);
	printf("%d\n", result);
	printf("%d\n", t);

}