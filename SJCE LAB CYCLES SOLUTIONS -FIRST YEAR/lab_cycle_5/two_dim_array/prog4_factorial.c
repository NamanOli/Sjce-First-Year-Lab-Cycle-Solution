// program: Factorial

#include<stdio.h>
#include<stdlib.h>

//function prototype
unsigned long int fact(int);

int main()
{
	// initialize variables
	int n = 0;
	unsigned long int n_factorial = 0;
		
		// take user input
		printf("Enter the number: ");
		scanf("%d", &n);

		if(n < 0)  // n should always be positive
		{
			printf("should be a positive integer\n");
			printf("Program Terminated\n");
			exit(1);
		}

		n_factorial = fact(n);
		printf("%d! = %ld\n", n, n_factorial);

	return 0;
}

// function definition
unsigned long int fact(int k)
{

	if(k == 0)
		return 1;

	return k * fact(k - 1);
}
