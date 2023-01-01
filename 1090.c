// int의 범위를 넘어선다면 unsigned int 혹은 long long int를 사용하자.
#include<stdio.h>
int main()
{
	int a, r, n;
	scanf("%d%d%d", &a, &r, &n);
	long long int num = a;
	for (int i = 1; i < n; i++)
	{
		num *= r;
	}
	printf("%lld", num);
	return 0;
}