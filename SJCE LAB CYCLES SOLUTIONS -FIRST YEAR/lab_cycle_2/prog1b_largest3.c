#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int big = 0;
		printf("Enter 3 numbers: ");
		scanf("%d %d %d", &a, &b, &c);

		big = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);

		printf("The greatest value is %d\n", big);
	return 0;
}
