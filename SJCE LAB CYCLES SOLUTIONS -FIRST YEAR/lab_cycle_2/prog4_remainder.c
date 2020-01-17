#include<stdio.h>

int main()
{
	int a = 0, b = 0, remainder = 0, quotient = 0;

		printf("Enter the dividend and the divisor: ");
		scanf("%d %d", &a, &b);

		quotient = a/b;
		remainder = a - quotient*b;

		printf("remainder = %d\n", remainder);

	return 0;
}
