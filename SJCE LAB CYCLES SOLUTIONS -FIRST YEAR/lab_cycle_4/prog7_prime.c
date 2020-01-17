// program: prime number

#include<stdio.h>
#include<stdlib.h>   //for exit function

int main()
{
	// initialize variables
	int num = 0, i = 0;
		
		// take user input
		printf("Enter a number: ");
		scanf("%d", &num);

		if(num == 1) 
		{	// special case
			printf("1 is neither prime nor composite\n");
			exit(1);
		}

		// logic
		for(i = 2; i <= num/2; i++)		// its sufficient if divisibility is checked only till half of the number 
		{
			if(num % i == 0)
			{
				printf("%d is NOT PRIME\n", num);
				exit(1);
			}
		}

		printf("%d is PRIME\n", num);

	return 0;
}
