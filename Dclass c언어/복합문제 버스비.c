#include <stdio.h>
main(void)
{
	/*
	사용자의 나이를 입력받는다.
	0~ 7세 유아의 버스비는 800원
	8 ~ 19세 학생 버스비는 1200원
	20 ~ 34세 청년은 1600원
	35 ~ 59세 중년은 2000원
	60 ~ 150세 노인은 무료
	그외의 값을 입력했다면 무언가 잘못되었다 출력
	*/
	int uearAge;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &uearAge);

	if (uearAge >= 0 && uearAge <= 7) {
		printf("유아 버스비는 800원입니다.\n");
	}

	else if (uearAge >= 8 && uearAge <= 19) {
		printf("학생 버스비는 1200원입니다.\n");
	}

	else if (uearAge >= 20 && uearAge <= 34) {
		printf("청년 버스비는 1600원입니다.\n");
	}

	else if (uearAge >= 35 && uearAge <= 59) {
		printf("중년 버스비는 2000원입니다.\n");
	}

	else if (uearAge >= 60 && uearAge <= 150) {
		printf("노인 버스비는 무료입니다.\n");
	}

	return 0;
}