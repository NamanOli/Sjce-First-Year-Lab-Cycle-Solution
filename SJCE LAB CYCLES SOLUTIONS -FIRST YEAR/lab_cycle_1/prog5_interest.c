#include<stdio.h>
#include<math.h>

int main()
{
	float principal = 0, rate = 0, time = 0;
	float simpleInterest = 0, compoundInterest = 0;
	
		printf("Enter the principal amount: ");
		scanf("%f", &principal);
		
		printf("Enter the rate of interest :");
		scanf("%f", &rate);
		
		printf("Enter the time in years: ");
		scanf("%f", &time);
		
		simpleInterest = principal + (principal * rate * time)/100;
		compoundInterest = principal*pow((1 + rate/100), time);
		
		printf("The amount with simple interest after %f year(s) is %f\n", time, simpleInterest);
		printf("The amount with compound interest after %f year(s) is %f\n", time, compoundInterest);
		
	return 0;
	
}
