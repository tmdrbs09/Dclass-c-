#include <stdio.h>
main(void)
{
	int number1 = 1;
	//prinft("number1"); 출력 안됨
	printf("번호 : %d \n 나이 : %d \n", number1, number1);
	// 번호 : 1

	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d * %d * %d", num1, num2, result);

	return 0;
}
