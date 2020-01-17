// program: calculate mean, variance, std deviation

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

# define maxsize 10

int main()
{
	// initialize variables
	int arr[maxsize] = {0};
	int n = 0, i = 0;
	float mean = 0, variance = 0, std = 0;
	double sum = 0, varSum = 0;
		
		// take user input
		printf("Enter the number of elements: ");
		scanf("%d", &n);

		// make sure array size doesn't exceed maxsize
		if(n > maxsize)
		{
			printf("number exceeds maxsize %d\n", maxsize);
			printf("Increase maxsize\n");
			printf("Program terminated\n");
			exit(1);
		}
		
		//take array input
		printf("Enter the values: \n");
		for(i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		
		//display input array
		printf("\nInput array: ");
		for(i = 0; i < n; i++)	
			printf("%d  ", arr[i]);
		printf("\n");

		//calculate mean
		for(i = 0; i < n; i++)
			sum += arr[i];
		mean = sum/n;

		//calculate variance
		for(i = 0; i < n; i++)
			varSum += (arr[i] - mean)*(arr[i] - mean);
		variance = varSum/n;

		//calculate std deviation
		std = sqrt(variance);
		
		// display result
		printf("Mean = %f\nVariance = %f\nStd Deviation = %f\n", mean, variance, std);

	return 0;
}
