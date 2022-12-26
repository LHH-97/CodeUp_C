#include<stdio.h>
int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d", a * -1);
	return 0;
}

//단항 연산자 - 사용
#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", -a);
	return 0;
}
//단항연산자 -를 변수 앞에 붙이면 부호가 반대로 바뀌어 연산된다. 