#include<stdio.h>

int main()

{
	int a = 0, x = 0;

		printf("Enter a number: ");
		scanf("%d", &a);
		
		x = a & 1;
		x == 0 ? printf("Even\n") : printf("Odd\n");

	return 0;

}
