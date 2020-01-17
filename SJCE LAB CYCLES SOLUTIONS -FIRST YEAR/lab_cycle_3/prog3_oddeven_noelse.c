#include<stdio.h>

int main()
{
	int a = 0;

		printf("Enter a number: ");
		scanf("%d", &a);

		if (a % 2 == 0)
			printf("NUMBER IS EVEN\n");
		if (a % 2 != 0)
			printf("NUMBER IS ODD\n");

	return 0;
}

