#include <stdio.h>
main(void)
{
	/*
	if(���ǽ�){
		if(���ǽ�2){
			���ǽ�1��2�� ��� ������ ��쿡 �ڵ� ����;
		}
		1�������� ���� �ڵ�

	*/

	int student_num = 250805, student_num_check;
	int password = 1234, password_check;

	printf("�й��� �Է��ϼ���: ");
	scanf_s("%d", &student_num_check);

	printf("��й�ȣ�� �Է����ּ���");
	scanf_s("%d", &password_check);

	if (student_num == student_num_check) {
		if (password == password_check) {
			printf("�α���  �Ǿ����ϴ�!\n");
		}
		else {
			printf("��й�ȣ�� ��ġ�����ʽ��ϴ�.\n");
		}
	}
	else {
			printf("���̵� ��ġ���� �ʽ��ϴ�.");
		}
		return 0;
	}