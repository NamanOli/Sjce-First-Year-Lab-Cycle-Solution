#include<stdio.h>

int main()
{
	int a=0, b=0, c=0;
	
		printf("Enter 2 numbers: ");   //either separated by space or enter (newline)
		scanf("%d %d", &a, &b);
		
		//addition
		c = a + b;
		printf("The sum of %d and %d is %d\n", a, b, c);

		//subtraction
		c = a - b;
		printf("The difference of %d and %d is %d\n", a, b, c);

		//multiplication
		c = a * b;
		printf("The product of %d and %d is %d\n", a, b, c);

		//division
		c = a/b;
		printf("The quotient %d and %d is %d\n", a, b, c);

		//remainder or mod (not to confuse with absolute value)
		c = a % b;
		printf("The remainder of %d and %d is %d\n", a, b, c);

	return 0;
}
