#include <stdio.h>
main(void)
{
	/*
	if(조건식){
		if(조건식2){
			조건식1과2를 모두 만족할 경우에 코드 실행;
		}
		1차관문에 대한 코드

	*/

	int student_num = 250805, student_num_check;
	int password = 1234, password_check;

	printf("학번을 입력하세요: ");
	scanf_s("%d", &student_num_check);

	printf("비밀번호를 입력해주세요");
	scanf_s("%d", &password_check);

	if (student_num == student_num_check) {
		if (password == password_check) {
			printf("로그인  되었습니다!\n");
		}
		else {
			printf("비밀번호가 일치하지않습니다.\n");
		}
	}
	else {
			printf("아이디가 일치하지 않습니다.");
		}
		return 0;
	}