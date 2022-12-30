#include<stdio.h>
int main()
{
	char c,a = 'a';
	scanf("%c", &c);
	while (1)
	{
		if (a > c)
			break;
		printf("%c ", a);
		a += 1;
	}
	return 0;
}
