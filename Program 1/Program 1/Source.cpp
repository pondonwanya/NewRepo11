#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, a = 2;
	printf("Enter number :");
	scanf("%d", &num);
	printf("Factoring Result : ");
	if (num < 0) {
		num = num * (-1);
		printf("-1 x ");
	}
	if ((num == 1) || (num == 0)) {
		printf("%d", num);
	}
	else {
		while ((num > 1) && (a < num)) {
			if (num % a == 0) {
				printf("%d x ", a);
				num = num / a;
			}
			else a = a + 1;
		}
		printf("%d\n", a);
	}
	return 0;
}