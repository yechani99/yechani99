#define _CRT_SECURE_NO_WARNINGS
//�μ��߿��� ū���� ã�� �Լ� ����
#include <stdio.h>
int get_max(int x, int y);

int main(void)
{
	int a, b;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);
	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b));
	return 0;
}
int get_max(int x, int y)
{
	if (x > y) {
		return(x);
	}
	else { 
		return(y); 
	}
}