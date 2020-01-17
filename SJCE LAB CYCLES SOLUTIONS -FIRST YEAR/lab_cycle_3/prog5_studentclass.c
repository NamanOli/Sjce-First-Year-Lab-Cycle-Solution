#include<stdio.h>

/*
	------Average------
	90 - 100: distinction
	75 - 90: First class
	60 - 75: second class
	45 - 60: Third class
	35 - 45: Pass
	< 35: Fail

*/

#include<stdio.h>

int main()
{

	float sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0, sub6 = 0; //score of individual subjects
	float average = 0;

		printf("Enter the scores of student for 6 subjects: ");
		scanf("%f %f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5, &sub6);

		average = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6)/6;

		if (average >= 90)
			printf("Student passed with DISTINCTION\n");
		else if (average >= 75 && average < 90)
			printf("Student pass with FIRST CLASS\n");
		else if (average >= 60 && average < 75)
			printf("Student passed with SECOND CLASS\n");
		else if (average >= 45 && average < 60)
			printf("Student passed with THIRD CLASS\n");
		else if (average >= 35 && average < 45)
			printf("Student has PASSED\n");
		else
			printf("Student has unfortunately FAILED\n");
	return 0;
}
