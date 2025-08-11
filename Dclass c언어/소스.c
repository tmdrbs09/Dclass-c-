#include <stdio.h>
main(void)
{
	char string_text[] = "안녕하세요!";
	printf("문자열 변수 string_text의 길이는 : %zu \n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("문자열 변수 english_text의 길이는: %d\n",sizeof(string_text));

		char long_text[50] = "This is long";
	printf("문자열 변수 long_text의길이는 : %zu", sizeof(string_text));

	printf("배열 long_text에 저장된 문자열의 길이 : %d \n", strlen(long_text));
		// 초기화 하지 않은 공간은 포함X

		printf("%s\n", long_text);

	char question[30] = "My name is 승균",
		printf("%s\n", question);

	question[10] = '\0'
		printf("%s\n", question);

	return 0;
}