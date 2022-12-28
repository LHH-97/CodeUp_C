// 풀이 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (!a && b)
		printf("1");
	else if (a && !b)
		printf("1");
	else
		printf("0");
	return 0;
}

// 비트 연산자 ^(XOR) 사용한 코드
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a ^ b);
    return 0;
}
// 두 가지의 참(1) 또는 거짓(0)의 입력외의 3이나 5등은 문제의 조건에 의해 입력되지 않는다. 
// 단순 xor 연산을 판별하는 문제였다. 