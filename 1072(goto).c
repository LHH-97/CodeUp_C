#include<stdio.h>
int main()
{
    int num,a;
    scanf("%d", &num);

ONE:
    if (num == 0)
        goto END;
    else 
    {
        scanf("%d", &a);
        printf("%d\n", a);
        num -= 1;
        goto ONE;
    }
END:
    return 0;
}