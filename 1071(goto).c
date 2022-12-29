#include<stdio.h>
int main()
{
	int a;
One:
	scanf("%d", &a);
	if (a != 0) {
		printf("%d\n", a);
		goto One;
	}
	else {
		goto END;
	}
END:
	return 0;
}

//간결한 ver.
#include<stdio.h>
int main()
{
	int a;
One:
	scanf("%d", &a);
	if (a != 0) {
		printf("%d\n", a);
		goto One;
	}
	else
		return 0;
}

// goto 문은 코드에서 볼 수 있듯이 이동의 위치를 레이블로 표시한다. "goto 이동할 레이블:"
// 레이블은 실행의 대상이 아닌, 위치를 표시하는 역할로 사용되는 표식이며 대부분 편집기 상에서 왼쪽 정렬을 한다.