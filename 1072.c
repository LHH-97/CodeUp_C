// 재귀함수를 이용한 코드
#include<stdio.h>
int num1;
int solution(int n)
{
    if (n == 0)
        return 0;
    scanf("%d", &num1);
    printf("%d\n", num1);
    return solution(n - 1);  
}

int main()
{
    int num;
    scanf("%d", &num);
    solution(num);
    return 0;
}