#include <stdio.h>
main(void)
{
	int x = 10; int y = 20;
	int* const CONST_POINTER = &x;
	*CONST_POINTER = 30;
	printf("%d\n", *CONST_POINTER);

	//CONST_POINTER = &y;

	/*
	const int * p --> ���� ����� �ȴ�!(�ּ� ������ ���� : ���� �Ұ�)
	int const *p --> ���� ����� �ȴ�!(�ּ� ���� ���� :  ���� �Ұ�)
	int * cont p --> ������(�ּҰ�)�� ��� (�ּ� ���� �Ұ� :  ���� ����)
	const int * const p = &y; --> wnthdhk rkqt ahen tkdtnfk dkdP qusrud qnfrk

	const �� ��ġ�� * �տ� �ٴ��� �ڿ� �ٴ��Ŀ� ���� ����� �ǹ̰� �޶���
	* �ڿ� const�� ������ �ּҰ� ����ΰ�
	*/

	const int* p = &y;
	//*p = 30;
	p = &x;
	

	const int* const po  = &y;
	//*po = 10;
	//po = &x;



	return 0;
}