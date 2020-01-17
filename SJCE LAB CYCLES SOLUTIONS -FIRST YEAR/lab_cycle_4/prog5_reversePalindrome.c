// Program: Palindrome number

#include<stdio.h>

int main()
{
	// initialize variables
	int num = 0, reverse = 0, originalNum = 0;
	int i = 0, raw = 0;
		
		// take user input
		printf("Enter a 4 digit number: ");
		scanf("%d", &num);

		originalNum = num;	// store original number for later use in the program
		
		// logic
		for(i = 0; i < 4; i++)
		{
			raw = num%10;			// extracts the least significant digit
			reverse = reverse*10 + raw;	// generates number in reverse order with every itertation
			num = num/10;			// drops the least significant digit
		}
		

		if (reverse - originalNum == 0) 	// true only if palindrome
			printf("PALINDROME\n");
		else
			printf("NOT A PALINDROME\n");

	return 0;
}
