#include <stdio.h>
main(void)
{
	int x = 10;
	printf("%p\n", &x);
	// x�� �ּҸ� p�� �����ϰڽ��ϴ�
	// int : ������ �����ϴ� 4����Ʈ ����
	// &�� ����ϸ� �ּҿ� ������ �� �ִ�

	int* p = &x;
	// * �� ����ϸ� �ּҸ� ������ �� �ְ� �ȴ�
	printf("%p \n", *p);
	printf("%d \n", *p);
	// &p : ������(�ּ� �ȿ� �ִ� ������ ���� �����ϴ°�)

	double d = 31.4;
	double* ptr = &d;

	printf("%p \n", ptr);
	printf("%.2f \n,", *ptr);


	return 0;
}