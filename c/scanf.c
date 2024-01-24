#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("Please enter your age: \n");
	scanf("%i", &age);
	fflush(stdin);

	printf("Please enter your GPA: \n");
	scanf(" %f", &gpa);
	fflush(stdin);

	printf("Please enter your letter grade: \n");
	scanf(" %c", &grade);
	fflush(stdin);

	printf("Your age: %i\n", age);
	printf("Your GPA: %f\n", gpa);
	printf("Your grade: %c\n", grade);

	return 0;
}
	
