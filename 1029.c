#include<stdio.h>

int main(void) {

	long double f;
	scanf("%Lf", &f);
	printf("%.11Lf", f);
	return 0;
}
//float 형 유효자릿수 7자리, double 혹은 long double 유효자릿수 16자리
//double로 선언시 scanf에서 서식지정자로 %lf 출력시 %f, long double로 선언시 scanf에서 %Lf 출력시 %Lf or %lf로 출력되어야 한다. 

/*
#include<stdio.h>

int main(void) {

	double f;
	scanf("%lf", &f);
	printf("%.11f", f);
	return 0;
}
*/