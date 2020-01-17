// program: Generate even and odd number sum

#include<stdio.h>

int main()
{	
	// initializing the variables
	int n = 0, sumOdd = 0, sumEven = 0;
	int i = 0;

		// take user input
		printf("Enter the value of n: ");
		scanf("%d", &n);

		// logic
		for(i = 0; i<=n; i++)
		{
			if (i % 2 == 0) // true implies even number
				sumEven += i;
			else
				sumOdd += i;
		}

		// print the output
		printf("Sum of odd numbers in range 0 to %d is %d\n", n, sumOdd);
		printf("Sum of even numbers in range 0 to %d is %d \n", n, sumEven);

	return 0;
}
