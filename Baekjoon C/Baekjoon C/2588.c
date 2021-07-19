#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("");
	scanf_s("%d \n", &num1);
	printf("");
	scanf_s("%d", &num2);
	printf("%d \n", num1 * (num2 % 10));
	printf("%d \n", num1 * ((num2 % 100 - num2 % 10)/10));
	printf("%d \n", num1 * ((num2 - (num2 % 100 - num2 % 10)-num2%10))/100);
	printf("%d", num1 * num2);
	return 0;
}