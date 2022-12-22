#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d",x);
	return 0;
}
//scanf("서식",&변수의 주소) 단,%s 서식문자 ,즉 문자열을
//입력 받을 때는 배열의 이름 앞에 &연산자를 붙이지 않는다.