#include<stdio.h>
int main()
{
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    min = a > b? b : a;
    printf("%d",c > min ? min: c);
    return 0;
}

//Code 참조
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a<b ? (a<c?a:c) : (b<c?b:c) );
    return 0;
}
//조건식 ? (참일 때의 값 또는 식 ) : (거짓일 때의 값 또는 식)