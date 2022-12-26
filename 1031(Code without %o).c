#include<stdio.h>
#include<math.h>
int main(void) {
	int a;
	long long int b =0;
	int i = 0;
	scanf("%d", &a);
	while (a != 0) {
		
		b += a % 8*(long long int)pow(10,i);
		a /= 8;
		i++;
	}
	printf("%lld", b);
	return 0;
}
//10**9 의 값은 10억이고, 그 이상의 10의 제곱수는 int형의 범위를 넘어서게 됩니다. 또, 10**9승에 2 초과의 수를 곲하게 되면 int형 범위를 벗어나기에
//pow()연산의 형변환과, b를 long long int형으로 선언해주는 것이 자료형 범위의 오차를 없앨수 있는 방법입니다.  