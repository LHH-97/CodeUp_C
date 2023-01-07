#include<stdio.h>
int main()
{
    int arr[19][19] = { 0 };
    int num, x,y;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &x, &y);
        arr[x - 1][y - 1] = 1;
    }
    for (int j = 0; j < 19; j++) {
        for (int k = 0; k < 19; k++)
        {
            printf("%d ", arr[j][k]);
        }
        printf("\n");
    }
    return 0;
}