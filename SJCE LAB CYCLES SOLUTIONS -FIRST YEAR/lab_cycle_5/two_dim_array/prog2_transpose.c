// program: transpose of matrix

#include<stdio.h>
#include<stdlib.h>

# define maxrow 10
# define maxcol 10

int main()
{
	// initialize variables
	int m = 0, n = 0, i = 0, j = 0;
	int arr[maxrow][maxcol] = {0};
	int trans[maxrow][maxcol] = {0};
		
		// take user input
		printf("Enter the dimensions of the matrix: ");
		scanf("%d %d", &m, &n);
		
		// make sure array dimensions doesn't exceed max permitted dimensions 
		if(m > maxrow || n > maxcol)
		{
			printf("Dimensions exceeding max size\n");
			printf("Program terminated\n");
			exit(1);
		}
		
		//input matrix
		printf("Enter the matrix values:\n");
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &arr[i][j]);

		//display matrix
		printf("\nMatrix = \n");
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				printf("%d\t", arr[i][j]);
			
			printf("\n");
		}

		//perform transpose
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				trans[j][i] = arr[i][j];

		//display transpose
	
		printf("\nTranspose = \n");
		for(j = 0; j < n; j++)
		{
			for(i = 0; i < m; i++)
			printf("%d\t", trans[j][i]);
			
			printf("\n");
		}

	return 0;
}

