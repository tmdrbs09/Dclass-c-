#include <stdio.h>
main(void)
{
	/*
	����ڰ� �Է��� ���ڸ� ���� ���� 2��
	�Է¹��� ���ڸ� ������ �����ڸ� ���� ���� ( char)

	�����ڸ� ���� �Է¹ް�
	���� 2���� �̾ �Է¹޴´�.

	switch���� Ȱ���Ͽ� �����ڿ� +�� ���Դٸ� +case�� �۵���Ű��,
	*�� ���Դٸ� *case�� �۵����� ���⸦ �����.
	* ������ �����ڸ� ����ϸ鼭 ���� 2��°�� 0�� ���Դٸ� 0���� ���� �� �����ϴ�.
	*/

	//switch (���̽��˻��� ��) 
	//	case �˻��Ұ��� ����ִ� ���� : ���̽��� �˻��� ���� �´ٸ� ������ �ڵ�

	char operator;
	int num1, num2,

	printf("�����ڸ� �Է��ϼ���(+, -, *, /): ");
	scanf_s(" %c", &operator);
	
	printf("�� ���ڸ� �Է��ϼ���")
	scanf_s("%d %d", &num1, &num2);

	switch (operator) {
	case'+' : printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case'-' : printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case'*': printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case'/'
		if (num2 != 0) {
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
		} else {
			printf("0���� ���� �� �����ϴ�.\n");
		}
	break;
	

	return 0;
}