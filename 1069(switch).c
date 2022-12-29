// switch 문 사용하지 않은 코드
#include<stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    if ('A' == s) printf("best!!!");
    else if ('B' == s)printf("good!!");
    else if ('C' == s)printf("run!");
    else if ('D' == s) printf("slowly~");
    else printf("what?");
    return 0;
}

//switch 분기문을 사용한 코드
#include<stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    switch (s)
    {
    case 'A':
        printf("best!!!");
        break;
    case 'B':
        printf("good!!");
        break;
    case 'C':
        printf("run!");
        break;
    case 'D':
        printf("slowly~");
        break;
    default:
        printf("what?");
    }
    return 0;
}