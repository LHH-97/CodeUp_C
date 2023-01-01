#include<stdio.h>
int main()
{
	int a, b, c, day = 1;
	scanf("%d%d%d", &a, &b, &c);
	while (day % a != 0 || day % b != 0 || day % c != 0)
		day++;
	printf("%d", day);
	return 0;
}

//풀었던 문제 중 가장 어려웠던 문제였다. 최소 공배수를 이용하려 했었고 너무 복잡했었다. 
//while문의 조건식에서 논리 연산자 or가 사용이 되었는데, or의 성질을 이용한 조건식이다. (1 or 0 or 0) 이라 하더라도 조건식 하나가 참이면 while(1)이 되어 반복문이 돌아가게 된다.
