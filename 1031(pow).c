#include<stdio.h>
#include<math.h>
int main(void) {
	for (int i = 0; i < 11; i++)
	{
		printf("%lld---%f\n", (long long int)pow(20, i), pow(10, i));
	}
	return 0;
}
//(long long int)형으로의 형변환과 (int)형변환 했을시의 차이가 있다. pow()연산이 int형의 범위를 넘어섰을때 int형변환을 하게 되면 그 범위에 맞는 값이
//출력될 수 없다. 