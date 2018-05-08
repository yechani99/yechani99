#define _CRT_SECURE_NO_WARNINGS
/*10진수 정수를 입력받아 16진수로 출력하는 프로그램*/
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%x", n);	//%x : 16진수
	return 0;
}