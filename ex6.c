#include <stdio.h>
int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4321f;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome supwer powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", initial);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n",
			first_name, initial, last_name);

	return 0;
}
