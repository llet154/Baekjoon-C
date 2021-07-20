#include <stdio.h>

int main(void)
{
	int n = 1, n2;
	printf("");
	scanf_s("%d", &n2);

	for (n; n < 10; n++)
	{
		printf("%d * %d = %d \n",n2, n, n2 * n);
	}
	return 0;
}