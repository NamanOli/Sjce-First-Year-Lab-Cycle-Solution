#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int op = 0;

		printf("Enter 2 numbers: ");
		scanf("%d %d", &a, &b);

		printf("--------Enter the number to perform corresponsing operation--------\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
		
		scanf("%d", &op);

		switch(op)
		{
			case 1:
				c = a + b;
				printf("The sum of %d and %d is %d\n", a, b, c);
				break;
			case 2:
				c = a - b;
				printf("The difference of %d and %d is %d\n", a, b, c);
				break;
			case 3:
				c = a * b;
				printf("The product of %d and %d is %d\n", a, b, c);
				break;
			case 4:
				c = a / b;
				printf("The quotient of %d and %d is %d\n", a, b, c);
				break;
			default:
				printf("Invalid input\n");
		
		}//End switch

	return 0;
}
