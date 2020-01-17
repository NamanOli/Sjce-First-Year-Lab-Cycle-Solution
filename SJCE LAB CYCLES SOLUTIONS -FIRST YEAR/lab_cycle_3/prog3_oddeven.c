#include<stdio.h>

int main()
{
	int a = 0, result = 0;

		printf("Enter a number: ");
		scanf("%d", &a);

		if (a % 2 == 0)
			printf("NUMBER IS EVEN\n");
		else
			printf("NUMBER IS ODD\n");
	return 0;
}
