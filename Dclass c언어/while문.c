#include <stdio.h>
main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("�ȳ��ϼ��� %d\n", hi);
		hi++;
	}

	//while�� ������ 6��
	int six = 1;
	while (six <= 60)
		if (six % 6 == 0) {
			printf("%d\n", six;
		}
			six++;
		}

//����ڰ� 0�� �Է��ҋ����� ���������� ���α׷�
//scanf_s 2�� �� (1���� while��,1���� while�� �ȿ�)
// �� �ڵ� ����
// }

int num
printf("���ڸ� �Է��ϼ���(0�� �Է��ϸ� ����")
scnaf_s("%d" & num);

while (num != 0) {
	printf("�Է��� ���ڴ� %d �Դϴ�.\n", num);
	scanf_s("%d", &num);
}

printf("���α׷��� �����մϴ�.\n");

	return 0;