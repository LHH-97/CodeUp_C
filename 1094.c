//배열의 길이를 상수로 설정해 올바른 코드.
#include<stdio.h>
int main()
{
    int num, n;
    scanf("%d", &num);
    int arr[10000] = { 0, };

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        arr[i] = n;
    }
    for (int j = num -1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}