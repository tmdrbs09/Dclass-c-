#include <stdio.h>
main(void)
{
	/*
	������� ���̸� �Է¹޴´�.
	0~ 7�� ������ ������� 800��
	8 ~ 19�� �л� ������� 1200��
	20 ~ 34�� û���� 1600��
	35 ~ 59�� �߳��� 2000��
	60 ~ 150�� ������ ����
	�׿��� ���� �Է��ߴٸ� ���� �߸��Ǿ��� ���
	*/
	int uearAge;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &uearAge);

	if (uearAge >= 0 && uearAge <= 7) {
		printf("���� ������� 800���Դϴ�.\n");
	}

	else if (uearAge >= 8 && uearAge <= 19) {
		printf("�л� ������� 1200���Դϴ�.\n");
	}

	else if (uearAge >= 20 && uearAge <= 34) {
		printf("û�� ������� 1600���Դϴ�.\n");
	}

	else if (uearAge >= 35 && uearAge <= 59) {
		printf("�߳� ������� 2000���Դϴ�.\n");
	}

	else if (uearAge >= 60 && uearAge <= 150) {
		printf("���� ������� �����Դϴ�.\n");
	}

	return 0;
}