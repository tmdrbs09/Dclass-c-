#include	<stdio.h>
main(void)
{
	/*int x, y, z, total;
	printf("���� 3�� �Է� : ");	
	scanf_s("%d %d %d", &x, &y, &z);
	total =x +y +z;
	printf("%d +%d + %d = %d\n", x, y, z, total);*/

	float fnum;
	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &fnum);
	printf("�Էµ� �� : %,2f\n", fnum);
	
	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s(" �Էµ� �� : %f", &scanf_pi);
	printf("�Էµ� �� : %4f ", scanf_pi);

	return 0;
}