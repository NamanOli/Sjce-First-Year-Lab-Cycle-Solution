// program: print prime

#include<stdio.h>

int main()
{
	// initialize variables
	int n = 0, i = 0, j = 2, m = 0;
	int isPrime = 1;
		
		// take user input
		printf("Enter the start and end: ");
		scanf("%d %d", &m, &n);  //m = start, n = end
		
		if (m == 1 || m == 0)	//because 1 is neither a prime nor a composite
			m = 2; //it should be avoided
		
		// outer loop to iterate from start to stop
		for(i = m; i <= n; i++)
		{
			isPrime = 1;

			// inner loop to check if current number is prime
			for(j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}

			if(isPrime)
				printf("%d\n", i);
		}

	return 0;

}
