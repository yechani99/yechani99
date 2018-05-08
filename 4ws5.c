#define _CRT_SECURE_NO_WARNINGS
/*3500원 있을 때 구매할 수 있는 방법 출력*/
#include <stdio.h>
int main(void)
{
	int a;
	printf("현재 당신이 소유하고 있는 금액 : 3,500원\n크림빵은 한개에 500원\n새우깡은 한개에 700원\n콜라는 한개에 400원\n크림빵을 몇 개 구입하시겠습니까? :");
	scanf("%d", &a);
	if (a == 1) {
		printf("크림빵 1개, 새우깡 2개, 콜라 4개를 구입합니다.\n");
	}
	else if (a == 2) {
		printf("크림빵 2개, 새우깡 3개, 콜라 1개를 구입합니다.\n");
	}
	else if (a == 3) {
		printf("크림빵 3개, 새우깡 1개, 콜라 2개를 구입합니다.\n");
	}
	else {
		printf("크림빵을 %d개 구입하면 잔돈이 남거나 구입할 수 없습니다.\n", a);
	}
	return 0;
}