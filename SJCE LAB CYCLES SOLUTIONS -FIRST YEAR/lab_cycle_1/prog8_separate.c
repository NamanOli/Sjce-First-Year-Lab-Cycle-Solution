#include<stdio.h>

int main()
{
	
	float num = 0, decimalPart = 0;
	int integralPart = 0;

		printf("Enter a float value: ");
		scanf("%f", &num);
		
		integralPart = (int) num;
		decimalPart = num - integralPart;

		printf("Integral Part: %d\n", integralPart);
		printf("Decimal Part: %f\n", decimalPart);

	return 0;
}
