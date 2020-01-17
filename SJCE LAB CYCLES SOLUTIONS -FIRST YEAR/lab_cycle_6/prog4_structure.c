#include<stdio.h>

struct Employee
{
	int id;
	int age;
	int salary;
	char name[60];
};

int main()
{
	struct Employee e1;
	struct Employee e2;
	struct Employee e3;

		// collect details of employee 1
		printf("Enter details of employee 1: \n");
		printf("Enter name:\n");
		scanf("%s", &e1.name);
		printf("Enter employee id: \n");
		scanf("%d", &e1.id);
		printf("Enter age: \n");
		scanf("%d", &e1.age);
		printf("Enter salary:\n");
		scanf("%d", &e1.salary);

		// collect details of employee 2
		printf("\nEnter details of employee 2: \n");
		printf("Enter name:\n");
		scanf("%s", &e2.name);
		printf("Enter employee id: \n");
		scanf("%d", &e2.id);
		printf("Enter age: \n");
		scanf("%d", &e2.age);
		printf("Enter salary:\n");
		scanf("%d", &e2.salary);

		// collect details of employee 3
		printf("\nEnter details of employee 3: \n");
		printf("Enter name:\n");
		scanf("%s", &e3.name);
		printf("Enter employee id: \n");
		scanf("%d", &e3.id);
		printf("Enter age: \n");
		scanf("%d", &e3.age);
		printf("Enter salary:\n");
		scanf("%d", &e3.salary);

		// displaying employee details
		printf("\n\nPrinting Employee details\n\n");
		printf("Name\t\tID\t\tAge\t\tSalary\n");
		printf("%s\t\t%d\t\t%d\t\t%d\n", e1.name, e1.id, e1.age, e1.salary);
		printf("%s\t\t%d\t\t%d\t\t%d\n", e2.name, e2.id, e2.age, e2.salary);
		printf("%s\t\t%d\t\t%d\t\t%d\n", e3.name, e3.id, e3.age, e3.salary);





	return 0;

}
