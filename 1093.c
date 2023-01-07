#include<stdio.h>
int main()
{
    int num,n;
    int arr[23] = {0};
    scanf("%d",&num);
    for (int i =0;i<num;i++)
    {
        scanf("%d",&n);
        arr[n-1] = arr[n-1]+1;
    }
    for (int j = 0;j<23;j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}