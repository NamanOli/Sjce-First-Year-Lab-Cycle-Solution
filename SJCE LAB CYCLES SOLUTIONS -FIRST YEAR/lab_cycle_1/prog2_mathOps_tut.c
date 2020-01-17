#include<stdio.h>
#include<math.h> 	//header for math functions
#include<stdlib.h>

int main()
{
	//create 3 variables
	int a = 0, b = 0, c = 0;	//it is a good practice to initialize variables to some known value	
	float d = 0, e = 0;		//we need a float value to perform fabs operation and also to store some results	
	
		printf("Enter a positive number and a negative number: ");
		scanf("%d %d", &a, &b);     //we store positive number in a and negative in b

		printf("Enter a negative float value (decimal): ");
		scanf("%f", &d);

		//square root
		e = sqrt(a); 		//We store the result in a float variable because square root of a numbe
					//need not be an integer always
		
		printf("The square root of %d is %f\n", a, e);   //note the format specifier for a(int) is %d and e(float) is %f

		//absolute value
		c = abs(b);	//remember that b is negative, so taking it's absolute value will return only its magnitude.
		printf("The absolute value of %d is %d\n", b, c);

		//fabs operation
		e = fabs(d);	//since d is a decimal/float, we should use fabs and not abs to get its absolute value
		printf("The absolute value of %f is %f\n", d, e);

		//try using abs for d and infer the output you obtain

		//power
		c = pow(a, 2);		//the first value from left is the base and the second one is the exponent
		printf("%d to the power of 2 is %d\n", a, c);


	return 0;
}
