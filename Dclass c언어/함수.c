#include <stdio.h>

void helloWorld() {
	printf("Hello World!\n");
}

int add(int a, int b) {
	return a + b;
}

void hellloName(char* name) {
	printf("Hello,%s\n", name);
}

main(void)
{
	helloWorld();
	int sum = add(8,2);
	printf("Sum :%d \n", sum);

	hellloName("�±�");


	/*
	��ȯ�� �Լ��̸�(�Ű�����){
		return 0;
	}

	��ȯ�� : �Լ��� ó�� ����� ��ȯ�� �� �ڷ���
	�Լ��̸� : ȣ���� �� ���
	�Ű����� : �Լ��� �۽�ų ��� (������ �ִ��Ŀ� ���� �������) [������������!]
	return : �Լ��� �۾��� ���� ���� �� ȣ���� ������ ���� �����ش�. void�ϋ� return ���� ����
	*/
	return 0;
}