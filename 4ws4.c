#define _CRT_SECURE_NO_WARNINGS
/*�ΰ��� ������ �Է¹޾� �ִ����� ���ϴ� ���α׷�*/
#include <stdio.h>
int main(void)
{
	int i,n, m,gcd;		//gcd : greatest common divisor(�ִ�����)
	printf("�� ���� ���� �Է�:");
	scanf("%d %d", &n, &m);

	for (i = 1; i <= n && i <= m; i++) {
		if (n%i == 0 && m%i == 0) {		//i��1�������ϸ鼭 �Ѵٳ�������0�ΰ��, �� ������ΰ�� gcd�� i����.
			gcd = i;					//for���� i��n�����۰ų����� m�����۰ų��������ȿ��� ������ ��� �ݺ�.
										//������ �����̵Ǹ鼭 for���� ������ �� gcd�� ����Ǿ��ִ� ���� �ִ�����.		
		}
	}
	printf("�� ���� �ִ�����:%d\n", gcd);	//�� gcd���� ���.
	return 0;
}