#include<stdio.h>
#include<math.h>	//to use sqrt and fabs

int main()
{
	float a = 0, b = 0, c = 0;
	float root1 = 0, root2 = 0;
	float real = 0, imag = 0;
	float discriminant = 0;

		printf("Enter the coefficients: ");
		scanf("%f %f %f", &a, &b, &c);

		discriminant = b*b - 4*a*c;

		if (discriminant >= 0) //means roots are real
		{
			root1 = -(b/2*a) + (sqrt(discriminant)/2*a);
			root2 = -(b/2*a) - (sqrt(discriminant)/2*a);

			printf("The roots of the equation are %f and %f\n", root1, root2);

		}

		else //means roots are complex
		{
			//complex roots are always conjugate pairs. They differ only in the sign of the complex part.
			
			real = -(b/2*a);
			imag = sqrt(fabs(discriminant))/2*a;

			printf("The roots of the equation are (%f)+i(%f) and (%f)-i(%f)\n", real, imag, real, imag);
		}
		
	return 0;
}
