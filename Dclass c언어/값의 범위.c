#include <stdio.h>
int main(void)
{
	unsigned int max_number = 220000000;
	printf("%u\n", max_number);

	int num1 = 1;
	printf("%d", sizeof(num1));
	printf("%zu", sizeof(100));
	printf("%zu", sizeof(3.14));
	return 0;

	//signed : �⺻���ǹ���
	//�� �� �ֻ��� ��Ʈ�� ��ȣ��Ʈ�� ���
	// 0: ��� 1: ����
	// 1����Ʈ�� ���� ��� 8��Ʈ �� ù��° �ֻ��� ��Ʈ�� ��ȣ��Ʈ�� ����Ѵϱ� ������ 7���� ��Ʈ�� ���� ������ ���
	
	// unsigned : ��� ��Ʈ�� ���ں�Ʈ�� ���
	// 0���� ~2^n -1
	// *���⼭ n�̶� ���Ʈ���� ���ϴ� ���ڰ� ����
	// 0�� ����� �����ϴ� -1 ����� ��
}