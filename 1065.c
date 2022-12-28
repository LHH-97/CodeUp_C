#include<stdio.h>
int main()
{
    int arr[3];
    for (int i = 0;i < 3;i++){
        scanf("%d",&arr[i]);
        if (arr[i] % 2 == 0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}