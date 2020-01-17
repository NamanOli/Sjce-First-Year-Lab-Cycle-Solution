// program: Linear search

#include<stdio.h>
#include<stdlib.h>

# define maxsize 10  //for initializing of array.
		     //increase if you want to fit more than 10 elements

int main()
{
	// initialize variables
	int array[maxsize] = {0};
	int i = 0, n = 0, key = 0, found = 0;
		
		// take user input
		printf("Enter the number of elements: ");
		scanf("%d", &n);
		
		// make sure array size doesn't exceed maxsize
		if(n > maxsize)
		{
			printf("elements exceed maxsize of %d\n", maxsize);
			printf("program terminated\n");
			exit(0);
		}
		
		// take user input of array elements
		printf("Enter the elements\n");
		for(i = 0; i < n; i++)
			scanf("%d", &array[i]);

		// take user input of element to search
		printf("Enter the element to search: ");
		scanf("%d", &key);

		// logic for linear search
		for(i = 0; i < n; i++)
			if(key == array[i])
			{
				found = 1;
				printf("%d found at pos %d\n", key, i+1);
				break;
			}

		if(!found)
			printf("%d not found\n", key);
			
	return 0;
}
