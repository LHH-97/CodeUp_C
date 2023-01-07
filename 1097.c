#include<stdio.h>
int main()
{
    int arr[20][20] = { 0 };
    int num,x,y;
    for (int i = 1; i < 20; i++)
        for (int j = 1; j < 20; j++)
            scanf("%d", &arr[i][j]);
    scanf("%d", &num);

    for (int k = 0; k < num; k++)
    {
        scanf("%d %d", &x, &y);
        for (int b = 1; b <= 19; b++)
        {
            if (arr[x][b] == 0) arr[x][b] = 1;
            else arr[x][b] = 0;

            if (arr[b][y] == 0) arr[b][y] = 1;
            else arr[b][y] = 0;
        }
    }
    for (int i = 1; i <= 19; i++) {
        for (int j = 1; j <= 19; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
 return 0;
}