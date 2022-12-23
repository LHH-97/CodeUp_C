//기존의 정답코드
#include<stdio.h>
int main()
{
	char arr[21] ={0,};
	scanf("%s", arr);
	for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
		if (arr[i] == '\0')
			break;
		printf("\'%c\'\n", arr[i]);
	}
	return 0;
}
/*
위의 코드에서 개선되어야 할 부분
1. char arr[20] = {0,} 의미없는 초기화이다. 0은 널문자이고 널문자는 문자열의 끝을 의미한다. 즉 널문자가 앞에 있고, 뒤에 문자가 온다고 하면 비정상적인 문자열이라 할 수있다.

2. sizeof 연산자는 해당 자료형의 크기,배열의 크기를 구할 수 있는 연산자이다. sizeof(arr)을 하면 21이 나올 것이고, sizeof(char) = 1이다.
   즉, 문자열 arr의 원소로 'a' 하나 있다하더라도, sizeof(arr) = 21이 나오게 된다. 그러므로 위의 for문의 조건식은 잘못되었다고 볼 수있을 것 같다. for문 조건식을 잘 활용해야 한다. 
*/

/*
3.int arr [5] = {1,2}; //3,4,5번째 배열 요소는 0으로 채워진다.  int형 원소를 갖는 배열은 초기화되지 않은 나머지 인덱스는 0 값으로 채워진다. 
 문자열의 초기화도 int형과 같을까? 문자열의 초기화도 int형 배열 요소처럼 'a','1','\0' 중 한문자라도 입력이되거나 초기화를 하여도, 배열의 길이가 해당 원소의 갯수 
 이상이라면 나머지 뒷부분은 입력 혹은 초기화와 동시에 널문자로 초기화 되어지는 것을 확인하였다. 
 */

//널문자는 문자의 형태로 출력할 경우 아무런 출력이 발생하지 않는다. 