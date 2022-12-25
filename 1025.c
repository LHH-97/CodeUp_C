
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[5];
	for(int j=0;j<5;j++)
		scanf("%1d",&arr[j]);
	for (int i = 4; i >= 0; i--) {
		printf("[%d]\n",(int)pow(10, i) * arr[4-i]);
	}
	return 0;
}
//%1d 서식지정자를 사용하여 int형 배열 arr의 각 인덱스 넘버에 입력된 한 정수를 한자리씩 나눠 할당하였다. 

//************************************************************************************************************//

//Fail

#include<stdio.h>
#include<math.h>
int main()
{
	int arr[5];
	scanf("%d", &arr);
	int cnt = 0;
	for (int i = 0; i < 5; i++)
		printf("%d", arr[i]);
	/*
	for (int i = 4; i >= 0; i--) {
		printf("[%.0f]\n", arr[cnt]*pow(10, i));
		cnt++;
	}
	*/
	return 0;
}

//배열 이름 arr의 주소값과 배열의 첫번째 요소 arr[0]의 주소값은 서로 같다. 그렇기에 arr[0]에 입력값이 할당이 되지만, 나머지 인덱스에는 값이 입력이 되지 않고,
// 입력되지 않은 인덱스 값과 pow연산을 하니 답이 이상하게 출력이 되는 것이다. 

#include<stdio.h>

int main(void) {

	int arr[3] = { 0,1,2 };
	printf("배열의 이름: %p\n", arr);
	printf("첫 번쨰 요소: %p\n", &arr[0]);
	printf("두 번쨰 요소: %p\n", &arr[1]);
	printf("세 번쨰 요소: %p\n", &arr[2]);

	return 0;
}