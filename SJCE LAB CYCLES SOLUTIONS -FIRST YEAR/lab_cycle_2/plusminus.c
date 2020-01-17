#include<stdio.h>

int main()
{
	int a = 0;
		
		printf("Enter a number: ");
		scanf("%d", &a);
		
		a >= 0 ? printf("Positive\n"): printf("Negative\n");
	return 0;
}
