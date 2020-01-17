#include<stdio.h>
#include<math.h>

# define PI 3.14      //defining the macro to set the value of variable PI


int main()
{
	float radius = 0, sideSquare = 0, rectSideOne = 0, rectSideTwo = 0;
	float triSideOne = 0, triSideTwo = 0, triSideThree = 0;
	float triBase = 0, triHeight = 0, S = 0, intermediate = 0;
	float areaCircle = 0, areaSquare = 0, areaRect = 0;
	float areaTriOne = 0, areaTriTwo = 0;

		//Take all inputs first

		//input of circle
		printf("Enter the radius of the circle: ");
		scanf("%f", &radius);

		//input of square
		printf("Enter the length of side of square: ");
		scanf("%f", &sideSquare);

		//input of rectangle
		printf("Enter the 2 sides of rectangle: ");
		scanf("%f %f", &rectSideOne, &rectSideTwo);

		//input of triangle: sides given
		printf("Enter the 3 sides of a triangle: ");
		scanf("%f %f %f", &triSideOne, &triSideTwo, &triSideThree);

 		//input of triangle: base and height
		printf("Enter the base and height length of a triangle: ");
		scanf("%f %f", &triBase, &triHeight);

		//area of circle
		areaCircle = PI * radius * radius;
		
		//area of square
		areaSquare = sideSquare * sideSquare;

		//area of rectangle
		areaRect = rectSideOne * rectSideTwo;

		//area of triangle one (using Hero's formula)
		S = (triSideOne + triSideTwo + triSideThree)/2;
		intermediate = S * (S - triSideOne) * (S - triSideTwo) * (S - triSideThree);
		areaTriOne = sqrt(intermediate);   
		
		//area of triangle two
		areaTriTwo = 0.5 * triBase * triHeight;

		printf("\nArea of circle with radius %f is %f\n", radius, areaCircle);
		printf("Area of square with side %f is %f\n", sideSquare, areaSquare);
		printf("Area of rectangles with sides %f and %f is %f\n", rectSideOne, rectSideTwo, areaRect);
		printf("Area of triangle with sides %f %f %f is %f\n", triSideOne, triSideTwo, triSideThree, areaTriOne);
		printf("Area of triangle with base: %f and height: %f is %f\n", triBase, triHeight, areaTriTwo);


	return 0;
}

