/****************************
switch문 예제
2022-02-02	이성봉	최초생성
****************************/

#include <stdio.h>

int main()
{
	int num;
	printf("뭐 입력? ; ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1 \n");
		printf("2 \n");
		break;
	case 2:
		printf("3 \n");
		printf("4 \n");
		break;
	default:
		printf("5 \n");
		printf("6 \n");
	}
	return 0;
}

/*
1입력
1,2 출력
2입력
3,4 출력
1,2 이외의 숫자 입력
5,6 출력
*/