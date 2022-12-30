#include<stdio.h>
int main(void)
{
    char arr = 0;
    while (arr != 'q')
    {
        scanf("%c", &arr);
        printf("%c %d ,", arr,arr);
    }
    return 0;
}

//scanf 함수에 공백문자 입력시 32 와 공백이 출력 됨을 확인할 수 있었다. 
//보통 입력되는 수를 구분하기 위해 공백(스페이스 바)을 사용하지만, 위의 반복문은 입력을 구분
//지을 필요 없이 입력이 진행되므로 공백도 인식이 된다. 