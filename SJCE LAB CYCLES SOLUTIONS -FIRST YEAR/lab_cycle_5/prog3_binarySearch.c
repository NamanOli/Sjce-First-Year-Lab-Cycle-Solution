// program: Binary Search

#include<stdio.h>

# define maxsize 10

int main()
{
	// initialize variables
	int array[maxsize] = {0};
	int n = 0, i = 0, j = 0, key = 0, found = 0;
	int low = 0, high = 0, mid = 0;
		
		// take user input
		printf("Enter the number of elements: ");
		scanf("%d", &n);
		
		// make sure array size doesn't exceed maxsize
		if(n > maxsize)
		{
			printf("Number of elements exceeds maxsize %d", maxsize);
			printf("Increase maxsize\n");
			printf("Program Terminated\n");
		}

		//take input
		printf("Enter the elements\n");
		for(i = 0; i < n; i++)
			scanf("%d", &array[i]);

		//display array
		printf("Input array: ");
		for(i = 0; i < n; i++)
			printf("%d  ", array[i]);

		//get key
		printf("\nEnter element to search: ");
		scanf("%d", &key);

		//bubble sort
		for(i = 0; i < n - 1; i++)
			for(j = 0; j < n-i-1; j++)
				if(array[j] > array[j+1])
				{
					array[j] = array[j] + array[j+1];
					array[j+1] = array[j] - array[j+1];
					array[j] = array[j] - array[j+1];
				}
		
		//binary search

		high = n;
		while(low <= high)
		{
			mid = (low + high)/2;
			if(array[mid] < key)
				low = mid + 1;
			else if(array[mid] > key)
				high = mid - 1;
			else
			{
				found = 1;
				break;
			}
		}

		if(!found)
			printf("Element not found\n");
		else
			printf("%d found at pos %d\n", array[mid], mid+1);


	return 0;
}
