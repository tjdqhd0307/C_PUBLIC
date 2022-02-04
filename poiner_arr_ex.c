/********************
함수의 인자로 배열을 전달하기 예제

2022.02.04	최초생성		이성봉
********************/
#include <stdio.h>

void fct(int*ptr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ",ptr[i]);
	printf("\n");
}

void adde(int*ptr, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		ptr[i] += add;
}

int main(void)
{
	int arr[3] = { 1, 2, 3 };
	adde(arr, sizeof(arr) / sizeof(int), 1); //arr 주소값에 1,2,3을 1증가시킨 2,3,4가 저장된다
	fct(arr, sizeof(arr) / sizeof(int));	//저장된 2,3,4가 출력

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);		//현재 arr에 저장되어있는 값을 보기위한 문장
	printf("\n");

	adde(arr, sizeof(arr) / sizeof(int), 2); //ar 주소갑에 저장되어 있던 2,3,4를 2증가시켜 4,5,6 이 된다
	fct(arr, sizeof(arr) / sizeof(int)); //4,5,6 출력

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	printf("\n");

	adde(arr, sizeof(arr) / sizeof(int), 3);//		'''		3증가시켜 7,8,9가 된다
	fct(arr, sizeof(arr) / sizeof(int));	//7,8,9 출력

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

출력 결과
/*
2 3 4
2 3 4
4 5 6
4 5 6
7 8 9
7 8 9
*/