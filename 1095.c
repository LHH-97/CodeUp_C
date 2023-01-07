#include<stdio.h>
int main()
{
    int arr[10000] = { 0 };
    int num,n,min = 23;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        arr[i] = n;
    }
    for (int j = 0; j < num; j++)
    {
        if (min > arr[j])
            min = arr[j];
    }
    printf("%d", min);
    return 0;
}