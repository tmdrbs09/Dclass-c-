#include <stdio.h>
main(void)
{
	/*
	for(�ʱⰪ;���ǽ�;������){
	������ ���̶�� �����ų �ڵ�
	}
	*/

	int forNumber;

	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("�ݺ� %d\n", forNumber);
	}

	int i;
	// i�� ������
	// �ݺ�10
	//  �ݺ�9
	// �ݺ�8
	//  �ݺ�7
	// �ݺ�6
	// �ݺ�5
	//  �ݺ�4
	// �ݺ�3
	// �ݺ�2
	// �ݺ�1

	for (i = 10; i >= 1; i--) {
		printf("�ݺ� %d\n", i);
	}

	//�������� �����
	//1�� ���� : 1
	//2�� ���� : 4
	//3�� ���� : 9
	//10���� : 100

	int sguare;
	for (sguare = 1; sguare <= 10; sguare++) {
		printf("%d �� ���� : %d", sguare, sguare * sguare);
	}

	for (;;) {

	}

	while (1) {
		printf("")

	}
	return 0;
}