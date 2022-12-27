#include<stdio.h>
int main(void) {
	int a,b;
	scanf("%d %d", &a,&b);
	if (a > b)
		printf("1");
	else
		printf("0");
	return 0;
}

// 관계(비교) 연산자를 사용한 코드
#include<stdio.h>
int main(void) {
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d", a > b);
	return 0;
}
// 관계 연산자 <,> , == ,!= <= ,>= 등은 조건을 만족하면 1, 만족하지 않으면 0을 반환. 
