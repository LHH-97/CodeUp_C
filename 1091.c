#include<stdio.h>
int main()
{
	int m, d,n;
	long long int num,a;
	scanf("%lld %d %d %d", &a, &m, &d,&n);
	for (int i = 1; i < n; i++)
	{
		num = a * m + d;
		a = num;
	}
	printf("%lld", a);
	return 0;
}

//수를 여러번 곱해야 하는 경우 해당 자료형에 맞지 않아 오버플로우가 발생할 수도 있으니, 
//이의 경우 자료형을 잘 선언해줘야 겠다. 