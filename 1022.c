#include<stdio.h>
int main()
{
    char arr[2001];
    fgets(arr,sizeof(arr),stdin);
    printf("%s",arr);
    return 0;
}
//fgets 함수는 엔터(\n)를 만날 때 까지 문자열을 읽어 들이기에 문자열 중간에 삽입된
//공백문자도 문자열의 일부로 읽어 들인다. 
//scanf 함수를 통해서는 공백을 포함하는 형태의 문자열을 입력받을 수 없다.

//gets 함수는 버퍼오버플로우 공격에 취약하며, fgets함수를 사용하도록 권고된다.