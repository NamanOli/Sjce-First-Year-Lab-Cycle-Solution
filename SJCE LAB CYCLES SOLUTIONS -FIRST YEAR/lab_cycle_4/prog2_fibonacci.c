// program: Fibonacci sequence

#include<stdio.h>

int main()
{
	// initialize variables
	int a = 0, b = 1, n = 0, temp = 0;
	int i = 0;

		// take user input
		printf("Enter the value of n: ");
		scanf("%d", &n);

		// logic
		for(i = 0; i<=n; i++)
		{
			printf("%d\n", a); 	
			temp = a;		
			a = b;			
			b = temp + b;
		
		}
	return 0;
}
