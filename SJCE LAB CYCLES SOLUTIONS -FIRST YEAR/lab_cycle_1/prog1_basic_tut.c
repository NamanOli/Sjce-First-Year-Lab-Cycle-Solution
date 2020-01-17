#include<stdio.h>

int main()
{
	//create 3 variables a, b, and c.
	//The first variables are to store the numbers, 
	//and the third one is to store the result
	
	int a=0, b=0, c=0;     //it is always a good practice to initialize
			       //your variables to some known value, otherwise
			       // the compiler assigns some random values which	
			       //may cause error sometimes.

	//To display a message on screen we use the printf function, as follows
	
		printf("Enter first number: ");         //When the user runs the program, this is the first
					                // thing he/she sees. (hopefully, your program doesn't crash before that)

		//After the user sees this message, he/she will enter a number (integer), and press enter.
		//You should have something set up to receive this user input, so that, you can process it
		//using your program. We achieve it using scanf function, as follows

		scanf("%d", &a);         //There are several this happening here in this line. Let me break it down

		//first %d is called the format specifier. It tells the compiler that you are expecting an integer.
		//different datatypes have different format specifier (float has %f).
		//format specifiers should be enclosed with double-quotes

		//second, the &a tells the compiler that whatever value is read, store it in the memory location of a.

		//Now let's take the second input

		printf("Enter second number: ");   
		scanf("%d", &b);		   	

		//we now have both 2 numbers to perform arithmetic operation
	
		//addition
		c = a + b;
		printf("The sum of %d and %d is %d\n", a, b, c);        //when this instruction is executed, the first %d is replaced by a
								      //the second one is replaced by b, and the third one by c
 
		//subtraction
		c = a - b;
		printf("The difference of %d and %d is %d\n", a, b, c);

		//multiplication
		c = a * b;
		printf("The product of %d and %d is %d\n", a, b, c);

		//division
		c = a/b;		//Note that you will get an error if b = 0
		printf("The quotient of %d and %d is %d\n", a, b, c); 	//This is an integer division,
									// so the answer will be an integer, not a decimal

		//mod
		c = a % b;	//Not to confuse with absolute value
		printf("The mod of %d and %d is %d\n", a, b, c);
	return 0;
}
