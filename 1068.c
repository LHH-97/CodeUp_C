// Code1
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (90 <= score && score <= 100)
        printf("A");
    else if (70 <= score && score <= 89)
        printf("B");
    else if (40 <= score && score <= 69)
        printf("C");
    else
        printf("D");
    return 0;
}

//Code 2(간결한 코드)
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (90 <= score)
        printf("A");
    else if (70 <= score)
        printf("B");
    else if (40 <= score)
        printf("C");
    else
        printf("D");
    return 0;
}