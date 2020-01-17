#include<stdio.h>

int main()
{
	int a = 0, b = 0;
	int big = 0;

		printf("Enther 2 numbers: ");
		scanf("%d %d", &a, &b);
		
		big = a;
		if (big < b)
			big = b;
		printf("%d is a bigger number\n", big);

	return 0;
}
