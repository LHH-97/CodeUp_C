//Fail
#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d",&num );
    int arr[num] = {0,};

    for (int i = 0;i<num;i++)
    {
        scanf("%d",&n);
        arr[i] = n;
    }
    for (int j = 9;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
Error : variable-sized object may not be initialized 가 발생한 코드이다. 
int arr[num]; 배열의 길이를 변수로 설정했기에 위와 같이 에러가 발생한다. 

배열의 길이는 상수로 설정해야 한다. 