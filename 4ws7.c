#define _CRT_SECURE_NO_WARNINGS
/*�� �Է¹����� ��,��,�ʷ� ȯ���ؼ� ����ϴ� ���α׷�*/
#include <stdio.h>
int main(void)
{
	int h, m, s;
	printf("�ʸ� �Է��ϼ���:");
	scanf("%d", &s);
	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;
	printf("[h:%d,m:%d,s:%d]\n", h, m, s);
	return 0;
}