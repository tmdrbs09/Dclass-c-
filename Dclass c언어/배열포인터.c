#include <stdio.h>
main(void)
{
	//�迭������
	int arr[3] = { 1,2,3 }; //���� 3���� �̷���� �迭
	int (*arrptr)[3] = &arr; // arr�迭 ��ü�� �ּҸ� ����Ű�� ������ ����
	printf("ù��° ��Ҵ� : %d\n", (*arrptr)[0]));
	printf("�ι�° ��Ҵ� : % d\n", (*arrptr)[1]));
	printf("����° ��Ҵ� : %d\n", (*arrptr)[2]));

	int(*in)[2];
	return 0;
}