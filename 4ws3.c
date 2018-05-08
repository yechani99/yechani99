#define _CRT_SECURE_NO_WARNINGS
/*두개의 정수를 입력하면 두 수 중 작은수의 단부터 큰수의 단까지의 구구단을 출력하는 프로그램*/
#include <stdio.h>
int main()
{
	int i, n, m;
	printf("두 수를 공백을 두고 입력하세요 :");
	scanf("%d %d", &n, &m);
	if (n > m) {
		for (m = m; m <= n; m++) {
			for (i = 1; i < 10; i++) {
				printf("%d %d은(는) %d\n", m, i, (m*i));
			}
		}
	}
	else {
		for (n = n; n <= m; n++) {
			for (i = 1; i < 10; i++) {
				printf("%d %d은(는) %d\n", n, i, (n*i));
			}
		}
	}
	return 0;
}