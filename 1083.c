#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}
	return 0;
}