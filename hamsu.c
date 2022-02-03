/********************
다양한 함수의 정의 4가지 예제

2022-02-02	최초생성		이성봉
********************/

#include <stdio.h>

	int Add(int num1, int num2)		//인자전달(O), 반환 값 (O)
	{
		return num1 + num2;
	}

	void ShoeAddResult(int result)		//인자전달(O), 반환 값 (X)
	{
		printf("덧셈결과 출력: %d \n", result);
	}

	int ReadNum(void)			//인자전달(X), 반환 값 (O)
	{
		int num;
		scanf_s("%d", &num);
		return num;
	}

	void HowToUseisProg(void)		//인자전달(X), 반환 값 (X)
	{
		printf("두개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
		printf("자! 그럼 두 개의 정수를 입력하세요. \n");
	}

	int main(void)
	{
		int result, num1, num2;
		HowToUseisProg();
		num1 = ReadNum();
		num2 = ReadNum();
		result = Add(num1, num2);
		ShoeAddResult(result);
		return 0;
	}

/*
두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.
자! 그럼 두 개의 정수를 입력하세요
ex) 12 24 입력시
36출력
*/