#include<stdio.h>

# define MAX_SIZE 100

int main(){

	char string[MAX_SIZE];
	int headMarker, mid, tailMarker, len = 0;

		puts("Enter a string:");
		gets(string); // reads user input

		// find the length of the string
		while(string[len] != '\0') // the last character of a string is always a null character '\0'.
			len++;
		
		tailMarker = len - 1;
		mid = len/2;

		for(headMarker = 0; headMarker < mid; headMarker++)
		{
			if(string[headMarker] != string[tailMarker])
			{
				puts("Not a palindrome");
				break;
			}
			tailMarker--;			
		}

		if(headMarker == mid)
			puts("Palindrome");	
		

	return 0;

		
}
