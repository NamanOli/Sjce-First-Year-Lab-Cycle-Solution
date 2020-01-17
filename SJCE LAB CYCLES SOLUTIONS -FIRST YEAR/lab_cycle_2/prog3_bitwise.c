#include<stdio.h>

int main()
{
	int a = 0, b = 0;
	int c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;

		printf("Enter the value of a and b: ");
		scanf("%d %d", &a, &b);

		c = a & b;
		d = a | b;
		e = ~a;
		f = a >> 3;
		g = a << 3;
		h = a^b;

		printf("c = a & b = %d\n", c);
		printf("d = a | b = %d\n", d);
		printf("e = ~a = %d\n", e);
		printf("f = a >> 3 = %d\n", f);
		printf("g = a << 3 = %d\n", g);
		printf("h = a ^ b = %d\n", h);

	return 0;
}
