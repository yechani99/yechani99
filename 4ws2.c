/*������ ����ϱ�*/
#include <stdio.h>
int main(void)
{
	int i,j,n;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d %d��(��) %d\n", i, j, (i*j));
		}
	}
	return 0;
}