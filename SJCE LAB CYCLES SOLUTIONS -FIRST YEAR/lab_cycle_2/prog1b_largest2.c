#include<stdio.h>

int main()
{
	int a = 0, b = 0;
		
		printf("Enter two numbers: ");
		scanf("%d %d", &a, &b);
		
		printf("The greater value is: ");
		a >= b ? printf("%d\n", a) : printf("%d\n", b);

	return 0;
}
