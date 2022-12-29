#include<stdio.h>
int num;
int main()
{
    printf("%d\n",num);
    num += 10;
    printf("%d",num);
    return 0;

}
/*
--전역 변수--

전역변수는 어디서든 접근이 가능한 변수로써 지역변수와 달리 중괄호 내에 선언되지 않는다. 

전역 변수의 특징은 

1.프로그램의 시작과 동시에 메모리 공간에 할당되어 종료 시까지 존재한다.

2. 별도의 초기 값으로 초기화하지 않으면 0으로 초기화된다.

3. 프로그램 전체 영역 어디서든 접근이 가능하다.

*/