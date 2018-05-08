#define _CRT_SECURE_NO_WARNINGS
/*초 입력받으면 시,분,초로 환산해서 출력하는 프로그램*/
#include <stdio.h>
int main(void)
{
	int h, m, s;
	printf("초를 입력하세요:");
	scanf("%d", &s);
	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;
	printf("[h:%d,m:%d,s:%d]\n", h, m, s);
	return 0;
}