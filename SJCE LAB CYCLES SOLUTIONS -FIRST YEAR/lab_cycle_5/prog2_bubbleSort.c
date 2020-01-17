// program: bubble sort

#include<stdio.h>
#include<stdlib.h>

# define maxsize 10	

int main()
{	
	// initialize variables
	int array[maxsize] = {0};
	int n = 0, i = 0, j = 0;
		
		// take user input
		printf("Enter the number of elements: ");
		scanf("%d", &n);

		// make sure array size doesn't exceed maxsize
		if(n > maxsize)
		{
			printf("number of elements greater than maxsize %d\n", maxsize);
			exit(0);
		}

		//take array input
		printf("Enter the elements: \n");
		for(i = 0; i < n; i++)
			scanf("%d", &array[i]);

		//print original array
		printf("\nOriginal array:\n");
		for(i = 0; i < n; i++)
			printf("%d  ", array[i]);

		//sort array
		for(i = 0; i < n-1; i++)
			for(j = 0; j < n-i-1; j++)
				if (array[j] > array[j+1])
				{
					//swapping (without using 3rd element)
					array[j] = array[j] + array[j+1];
					array[j+1] = array[j] - array[j+1];
					array[j] = array[j] - array[j+1];
				}
		
		//print sorted array
		printf("\nSorted array:\n");
		for(i = 0; i < n; i++)
			printf("%d  ", array[i]);
		
		printf("\n");
	return 0;
}

