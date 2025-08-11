#include <stdio.h>
main(void)
{
	int number[5] = { 10,20,30,40,50}

	int max:
	max = number[0];
	for (int i = 1; i < 5; i++) {
		if (max < number[i]) {
			max = number[i];

		}
	}
	printf("�ִ밪 : %d\n", max);
	return 0;
}