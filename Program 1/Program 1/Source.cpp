#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, a = 2;
	printf("Enter number :");
	scanf("%d", &num);
	printf("Factoring Result : ");
	while ((num > 1) && (a < num)) {
		if (num % a == 0) {
			printf("%d x ", a);
			num = num / a;
		}
		else a = a + 1;
	}
	printf("%d\n", a);
	return 0;
}