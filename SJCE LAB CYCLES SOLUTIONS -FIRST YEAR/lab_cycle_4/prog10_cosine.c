// program: calculate cosine of an angle

#include<stdio.h>
#include<math.h>

# define PI 3.1415

int main()
{
	// initialize variables
	int n = 0, i = 0, k = 0, j = 0;
	double angle = 0, radian = 0, sum = 0;
	unsigned long int fact = 1; 
		
		// take user input
		printf("Enter the number of terms: ");
		scanf("%d", &n);

		printf("Enter angle in degrees: ");
		scanf("%lf", &angle);

		radian = (PI * angle)/180;  //convert deg to rad
		
		// logic for Taylor's series
		for(i = 0; i < n; i++)
		{
			k = 2*i;
			
			//calculating factorial(k)
			fact = 1;
			for(j = k; j >= 1; j--)
				fact = fact*j;
			
			sum += pow(-1, i) * pow(radian, k)/fact;
		}

		// print the results
		printf("cos(%lf) = %lf\n", angle, sum);
		printf("library value = %lf\n", cos(radian));

	return 0;
}


