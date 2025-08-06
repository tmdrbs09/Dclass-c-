#include <stdio.h>
main(void)
{
	/*
	for(초기값;조건식;증감식){
	조건이 참이라면 실행시킬 코드
	}
	*/

	int forNumber;

	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("반복 %d\n", forNumber);
	}

	int i;
	// i를 가지고
	// 반복10
	//  반복9
	// 반복8
	//  반복7
	// 반복6
	// 반복5
	//  반복4
	// 반복3
	// 반복2
	// 반복1

	for (i = 10; i >= 1; i--) {
		printf("반복 %d\n", i);
	}

	//제곱계산기 만들기
	//1의 제곱 : 1
	//2의 제곱 : 4
	//3의 제곱 : 9
	//10제곱 : 100

	int sguare;
	for (sguare = 1; sguare <= 10; sguare++) {
		printf("%d 의 제곱 : %d", sguare, sguare * sguare);
	}

	for (;;) {

	}

	while (1) {
		printf("")

	}
	return 0;
}