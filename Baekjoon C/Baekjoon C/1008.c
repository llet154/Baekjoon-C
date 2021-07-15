#include <stdio.h>

int main(void)
{
	double n1, n2;
	printf("");
	scanf_s("%lf %lf", &n1, &n2);
	printf("%.9f", n1 / n2);
	return 0;
}