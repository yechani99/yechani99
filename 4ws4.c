#define _CRT_SECURE_NO_WARNINGS
/*두개의 정수를 입력받아 최대공약수 구하는 프로그램*/
#include <stdio.h>
int main(void)
{
	int i,n, m,gcd;		//gcd : greatest common divisor(최대공약수)
	printf("두 개의 정수 입력:");
	scanf("%d %d", &n, &m);

	for (i = 1; i <= n && i <= m; i++) {
		if (n%i == 0 && m%i == 0) {		//i가1씩증가하면서 둘다나머지가0인경우, 즉 공약수인경우 gcd에 i대입.
			gcd = i;					//for문은 i가n보다작거나같고 m보다작거나같은동안에는 어차피 계속 반복.
										//조건이 거짓이되면서 for문이 끝났을 때 gcd에 저장되어있는 값이 최대공약수.		
		}
	}
	printf("두 수의 최대공약수:%d\n", gcd);	//그 gcd값을 출력.
	return 0;
}