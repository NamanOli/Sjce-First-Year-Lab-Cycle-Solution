// program: Matrix operations

#include<stdio.h>
#include<stdlib.h>

# define maxrow 10
# define maxcol 10

int main()
{
	// initialize variables
	int m = 0, n = 0, i = 0, j = 0;
	int matA[maxrow][maxcol] = {0};
	int matB[maxrow][maxcol] = {0};
	int matC[maxrow][maxcol] = {0};
	int op = 0, flag = 1;

		// take user input
		printf("Enter the dimensions of the matrix: ");
		scanf("%d %d", &m, &n);
		
		// make sure dimensions don't exceed max permitted dimensions
		if(m > maxrow || n > maxcol)
		{
			printf("Matrix dimensions exceeds max permitted value\n");
			printf("Program Terminated\n");
			exit(1);
		}
		
		//input matrix A
		printf("Input matrix A:\n");
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &matA[i][j]);

		//input matrix B
		printf("Input matrix B:\n");
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &matB[i][j]);

		//print matrix A
		printf("\nmatrix A = \n");
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				printf("%d\t", matA[i][j]);

			printf("\n");
		}

		//print matrix B
		printf("\nmatrix B = \n");
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				printf("%d\t", matB[i][j]);

			printf("\n");
		}
		

		while(flag) //just to give user more chances to enter the type of operation, in case of any mistakes
		{
			printf("\nWhat operation would you like to perform?\n");
			printf("1.Matrix addition (A+B)\n2.Matrix subtraction (A-B)\n");
			scanf("%d", &op);
		
	
			if(op == 1)
			{
				flag = 0;

				//add element of A with corresponding element of B
				//and store in the corresponding location in third matrix C
				for(i = 0; i < m; i++)
					for(j = 0; j < n; j++)
						matC[i][j] =  matA[i][j] + matB[i][j];
				break; //not necessarily needed
			}

			else if(op == 2)
			{
				flag = 0;

				//subtract element of B from corresponding element of A
				//and store in the corresponding location in third matrix C
				for(i = 0; i < m; i++)
					for(j = 0; j < n; j++)
						matC[i][j] = matA[i][j] - matB[i][j];
				break; //not necessarily needed
			}

			else
			{
				flag = 1; //repeats the loop
				printf("Invalid operation\n");
			}
		}//end while

		//print the output
	
		printf("\nOutput = \n");
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
				printf("%d\t", matC[i][j]);
			
			printf("\n");
		}

	return 0;
}
