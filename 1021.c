#include<stdio.h>
int main()
{
    char arr[51];
    scanf("%s",arr);
    printf("%s",arr);
    return 0;
}
// 문자열을 입력받을때에는 입력받는 배열의 이름 앞에&연산자를 붙이지 않는다.
//char arr[51]은 배열의 길이(널문자포함)가 51이고,배열을 이루는 요소의 자료형이 char을 뜻한다.