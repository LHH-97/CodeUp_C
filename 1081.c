#include<stdio.h>
int main()
{
	int a, b,i,j;
	scanf("%d %d", &a, &b);
	for (i = 1; i < a + 1; i++) {    //i <= a 와 같이 관계연산자 <=를 활용할 수도 있다.  
		for (j = 1; j < b + 1; j++)
			printf("%d %d\n", i, j);
	}
	return 0;
}