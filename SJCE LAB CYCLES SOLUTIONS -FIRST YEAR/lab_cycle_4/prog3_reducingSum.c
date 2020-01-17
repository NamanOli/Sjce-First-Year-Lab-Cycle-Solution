// program: Reduced Sum

#include<stdio.h>

int main()
{
	// initialize variables
	int num = 0, i = 0;
	int sum = 0, originalNumber = 0;
		
		// take user input
		printf("Enter a number: ");
		scanf("%d", &num);
	
		// store original number for displaying later
		originalNumber = num;

		// logic
		while (num != 0)
		{
			sum += (num%10); 	// gets you the least significant digit(LSD) in every iteration and adds it to previous LSD.
			num = num/10;		// drops the least significant digit in every iteration
		}

		// display the result
		printf("reduced sum of %d is %d\n", originalNumber, sum);


	return 0;
}
