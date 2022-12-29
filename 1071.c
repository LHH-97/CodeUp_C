//재귀함수를 이용한 코드
#include<stdio.h>
int solution() {
    int a;
    scanf("%d", &a);
    if (a == 0)
        return 0;
    printf("%d\n", a);
    return solution();
}
int main()
{
    solution();
    return 0;
}