#include<stdio.h>

int main()
{

	float num = 0;
	int x = 0, rightMost = 0;

		printf("Enter a float value: ");
		scanf("%f", &num);

		x = (int) num;		//This drops all the numbers after decimal point
		rightMost = x % 10;     //Take any integer number and see that when you divide a number by 10, the remainder
					//is the units digit.

		printf("The right most integral digit of %f is %d\n", num, rightMost);

	return 0;
}
