#include<stdio.h>

int main()
{
	int x = 0, y = 0, z = 0;
	int temp = 0;

		printf("Enter 3 numbers: ");
		scanf("%d %d %d", &x, &y, &z);

		printf("Before rotation: x =  %d, y =  %d, z =  %d\n", x, y, z);
		
		//perform rotation
		temp = x;
		x = y;
		y = z;
		z = temp;
		
		printf("After rotation: x = %d, y = %d, z = %d\n", x, y, z); 
		
	return 0;
}
