#include <stdio.h>

int main(void)
{
	int n1, n2;
	printf("");
	scanf_s("%d %d", &n1, &n2);
	printf("%d \n", n1 + n2);
	printf("%d \n", n1 - n2);
	printf("%d \n", n1 * n2);
	printf("%d \n", n1 / n2);
	printf("%d", n1 % n2);
	return 0;
}