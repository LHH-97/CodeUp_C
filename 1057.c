#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", !(a ^ b));
    return 0;
}

//비트 연산자 ~(비트단위 NOT)은 0에서 1로 1에서 0으로 반전시키기에
//보수 연산이라고 불린다. 