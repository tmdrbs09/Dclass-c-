#include <stdio.h>
main(void)
{
	char string_text[] = "�ȳ��ϼ���!";
	printf("���ڿ� ���� string_text�� ���̴� : %zu \n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("���ڿ� ���� english_text�� ���̴�: %d\n",sizeof(string_text));

		char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�Ǳ��̴� : %zu", sizeof(string_text));

	printf("�迭 long_text�� ����� ���ڿ��� ���� : %d \n", strlen(long_text));
		// �ʱ�ȭ ���� ���� ������ ����X

		printf("%s\n", long_text);

	char question[30] = "My name is �±�",
		printf("%s\n", question);

	question[10] = '\0'
		printf("%s\n", question);

	return 0;
}