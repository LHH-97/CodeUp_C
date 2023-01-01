//code 1
#include<stdio.h>
int main()
{
	int num, a, d, n;
	scanf("%d%d%d", &a, &d, &n);
	num = (n - 1) * d + a; //등차수열의 성질. (n-a)가 안되는 이유는 a = 1부터 시작할지 2,3으로 시작할지 알 수가 없기 때문이다. 
	printf("%d", num);
	return 0;
}

//code 2
#include<stdio.h>
int main()
{
	int a, d, n;
	scanf("%d%d%d", &a, &d, &n);
	int num = a;
	for (int i = 1; i < n; i++)
	{
		num += d;
	}
	printf("%d", num);
	return 0;
}
