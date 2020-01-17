#include<stdio.h>

int main()
{
	int a = 0;
	int y = 0, x = 0, z = 0, w = 0;
			
		printf("Enter a number: ");
		scanf("%d", &a);

		printf("Initial value of a = %d\n", a);
		
		y = ++a;
		printf("Prefix increment: y = ++a = %d\n", y);

		z = a++;
		printf("Postfix increment: z = a++ = %d\n", z);
		
		printf("Current value of a = %d\n", a);

		x = --a;
		printf("Prefix decrement: k = --a = %d\n", x);

		w = a--;
		printf("Postfix decrement: m = a-- = %d\n", w);


	return 0;
}
