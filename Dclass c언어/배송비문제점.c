#include	<stdio.h>
main(void)
{
	/*
		구매금액을 입력받을것
		회원인지 입력받을것 ( 정수로 ex) 회원이면 1 , 아니면 0입력

		10만원 이상 구매고객 : 사은품 증정
		5만원 이상 구매고객 : 배송비 무료
		비회원은 (10만원 이상 구매해도 )배송비 5000원 부과도;ㅁ 안내

		5만원 이상 구매하고 회원이라면 배송비 무료 안내
		비회원은 배송비 5천원 부과됨 안내

		구매금액 50000원 미만이라면 회원이던 아니던 5000원 부과됨
	*/

	int totalPrice;
	int member;

	printf("구매금액을 입력하세요: ");
	scanf_s("%d", &totalPrice);

	printf("회원 여부를 입력하세요 (회원: 1 비회원: 0):");
	scanf_s("%d", &member);

	if (totalPrice >= 100000) {
		printf("사은품을 증정합니다./n");
		if (member == 1) {
			printf("회원님은 배송비가 무류입니다./n");
		}
		else {
			printf("배송비가 5000원 부과됩니다.");
		}
	}
	else if (totalPrice >= 50000) {
		if ((member == 1){
			printf("회원 50000원 이상 구매시 배송비 무료입니다./n");
		}
	}
	else {
		printf("구매금액이 50000원 미만입니다. 배송비 5000원이 부과됩니다./n");
	}	

	return 0;
}