#define _CRT_SECURE_NO_WARNINGS
/*�ΰ��� ������ �Է��ϸ� �� �� �� �������� �ܺ��� ū���� �ܱ����� �������� ����ϴ� ���α׷�*/
#include <stdio.h>
int main()
{
	int i, n, m;
	printf("�� ���� ������ �ΰ� �Է��ϼ��� :");
	scanf("%d %d", &n, &m);
	if (n > m) {
		for (m = m; m <= n; m++) {
			for (i = 1; i < 10; i++) {
				printf("%d %d��(��) %d\n", m, i, (m*i));
			}
		}
	}
	else {
		for (n = n; n <= m; n++) {
			for (i = 1; i < 10; i++) {
				printf("%d %d��(��) %d\n", n, i, (n*i));
			}
		}
	}
	return 0;
}