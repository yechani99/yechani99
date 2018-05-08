/*29까지의 소수 출력하는 프로그램*/
#include <stdio.h>
int main(void)
{
	int n,i;

	for (i = 2; i <= 29; i++) {			//1번반복문
		for (n = 2; n <= i; n++) {		//2번반복문
			if (i%n == 0) {
				break;
			}
		}
		if (i == n) {
			printf("%d ", i);
		}
	}									/*  i%n==0인 값 중에서 (2번반복문을 깨고 나온 값 중에서) i==n인 경우 출력.
										즉 나누어 떨어지면서 자기자신과 그 값이 같은 경우 출력.*/
	return 0;
}