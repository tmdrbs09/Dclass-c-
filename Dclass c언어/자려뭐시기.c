#include <stdio.h>
main(void)
{
	double change_nmber = 10;
	printf("%.15f\n", change_number);

	int change_number2 = 5.1123;
	printf("%d\n", change_umber2);

	//명시적 형 변환
	printf("%d\n", (int)1, 1234);
	printf("%d\n", (short)1.1234);
	printf("%d\n", (double)22);
	printf("%d\n", (float)22;

	unsigned char ch;//값의 볌위l 0 255
	unsigned short ch;//감의 범위 0 65,500
	unsigned int ch;//감의 범위 0 42억

	ch = 128;
	sh = 50000;
	in = 410000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%d\n", in);

	char num = 255;
	printf("d", num);
	// 255/2=127...1
	//127/2=63..1
	//63/2=31..1
	//31/2=15..1
	//15/2=7..1
	//7/2=3..1
	//3/2=1..1
	//1/2=0..1
	// 11111111
	return 0;
}