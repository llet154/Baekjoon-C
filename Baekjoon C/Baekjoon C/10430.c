#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	printf("");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("%d \n", (n1 + n2) % n3);
	printf("%d \n", ((n1 % n3) + (n2 % n3)) % n3);
	printf("%d \n", (n1*n2) % n3);
	printf("%d", ((n1 % n3) * (n2 % n3)) % n3);
	return 0;
}