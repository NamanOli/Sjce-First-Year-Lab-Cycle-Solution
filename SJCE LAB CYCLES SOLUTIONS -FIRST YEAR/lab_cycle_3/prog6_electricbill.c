#include<stdio.h>

/*
	Units consumed | Cost per unit
	------------------------------
	     0 - 20          10
	    20 - 50          20
	    50 - 100	     30
	      100+           50
	
*/

int main()
{

	float unitsConsumed = 0, costPerUnit = 0, totalCost = 0, remainingUnits;
		
		printf("Enter the units of electricity consumed: ");
		scanf("%f", &unitsConsumed);

		remainingUnits = unitsConsumed;

		if (remainingUnits >= 100)
		{
			totalCost = totalCost + (remainingUnits - 100) *50;
			remainingUnits = 100;
		}

		if (remainingUnits >= 50 && remainingUnits <= 100)
		{
			totalCost += (remainingUnits - 50)*30;
			remainingUnits = 50;
		}

		if (remainingUnits >= 20 && remainingUnits <= 50)
		{
			totalCost += (remainingUnits - 20)*20;
			remainingUnits = 20;
		}

		if (remainingUnits >= 0 && remainingUnits <= 20)
		{
			totalCost += remainingUnits*10;
			remainingUnits = 0;
		}

		printf("The total electricity bill is %.3f INR\n", totalCost);

		
	return 0;
}
