#include <stdio.h>
main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("안녕하세요 %d\n", hi);
		hi++;
	}

	//while문 구구단 6단
	int six = 1;
	while (six <= 60)
		if (six % 6 == 0) {
			printf("%d\n", six;
		}
			six++;
		}

//사용자가 0을 입력할떄까지 멈추지않은 프로그램
//scanf_s 2번 들어감 (1개는 while문,1개는 while문 안에)
// 이 코드 실행
// }

int num
printf("숫자를 입력하세요(0를 입력하면 종료")
scnaf_s("%d" & num);

while (num != 0) {
	printf("입력한 숫자는 %d 입니다.\n", num);
	scanf_s("%d", &num);
}

printf("프로그램을 종료합니다.\n");

	return 0;