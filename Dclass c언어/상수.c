#include <stdio.h>
#define PI= 3.14
main(void)
{
	//정수는 int로 실수는 double로
	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%zu\n", 10);

	const int MYCONST = 55;
	//선언과 동시에 초기화 해야함
	return 0;
}