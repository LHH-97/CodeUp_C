#include<stdio.h>
int main(void) {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f", a + b, a - b, a * b, a / b, a % b, (float)a/b);
	return 0;
}
//나눈값을 구하기위해 (float)a/b로 명시적 형변환을 실시해줍니다. 