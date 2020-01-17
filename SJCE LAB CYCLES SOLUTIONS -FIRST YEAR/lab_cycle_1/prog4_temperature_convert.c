#include<stdio.h>

int main()
{
	float fromCelsius = 0, fromFahr = 0;
	float toCelsius = 0, toFahr = 0;
	
		printf("Enter the temperature in fahrenheit: ");
		scanf("%f", &fromFahr);
		
		toCelsius = (fromFahr - 32)*(5.0/9);
		
		printf("%f fahrenheit is %f celsius\n", fromFahr, toCelsius);
		
		printf("Enter the temperature in celsius: ");
		scanf("%f", &fromCelsius);
		
		toFahr = (9.0/5)*fromCelsius + 32;
		
		printf("%f is celsius is %f fahrenheit\n", fromCelsius, toFahr);



	return 0;
}
