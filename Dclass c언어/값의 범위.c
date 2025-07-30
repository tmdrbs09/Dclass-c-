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

	//signed : 기본값의범위
	//맨 앞 최상위 비트로 부호비트로 사용
	// 0: 양수 1: 음수
	// 1바이트로 예를 들면 8비트 중 첫번째 최상위 비트를 부호비트로 사용한니까 나머지 7개의 비트로 값의 범위를 계산
	
	// unsigned : 모든 비트를 숫자비트로 사용
	// 0부터 ~2^n -1
	// *여기서 n이란 몇비트인지 정하는 숫자가 들어간다
	// 0을 양수로 포함하니 -1 해줘야 함
}