// program: Euclid's algorithm

#include<stdio.h>
#include<stdlib.h> //for abs function

int main()
{
	//initialize variables
	int a = 0, b = 0, gcd = 0, lcm = 0;
	int temp = 0, num1 = 0, num2 = 0;

		//take user input
		printf("Enter 2 numbers: ");
		scanf("%d %d", &a, &b);

		// store numbers for displaying later
		num1 = a;
		num2 = b;

		//Euclid's algorithm to find gcd
		//For explanation of logic check out:  https://en.wikipedia.org/wiki/Euclidean_algorithm
		while(b != 0)
		{
			temp = b;
			b = a % b;
			a = temp;
		}

		gcd = a;	// At the end of execution of loop the gcd is the last value that gets stored in a; assigning it to variable gcd

		lcm = (abs(num1) * abs(num2))/gcd;  // standard formula

		// print the result
		printf("GCD of %d and %d is %d\n", num1, num2, gcd);
		printf("LCM of %d and %d is %d\n", num1, num2, lcm); 

	return 0;
}
