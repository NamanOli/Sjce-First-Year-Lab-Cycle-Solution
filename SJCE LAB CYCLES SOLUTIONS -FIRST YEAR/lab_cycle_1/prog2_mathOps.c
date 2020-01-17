#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0;
	float d = 0, e = 0;

		printf("Enter a positive and negative number: ");
		scanf("%d %d", &a, &b);
		
		printf("Enter a negative float(decimal) number: ");
		scanf("%f", &d);

		//sqrt
		e = sqrt(a);
		printf("The square root of %d is %f\n", a, e);

		//abs
		c = abs(b);
		printf("The absolute value of %d is %d\n", b, c);

		//fabs
		e = fabs(d);
		printf("The absolute value of %f is %f\n", d, e);

		//pow
		c = pow(a, 2);
		printf("%d to the power of 2 is %d\n", a, c);

	return 0;
}
