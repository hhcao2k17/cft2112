//We are going to use the printf function from the std c library
#include <stdio.h>

//The main function is the entry point of a C/C++ program
int main(int argc, const char** argv)
{
	float pi = 3.14159265359;
	int year = 2017;
	char fail = 'F';
	const char *msg = "PI";

	printf("This year is %d\n", year);
	printf("%s is %f\n", msg, pi);
	printf("%c is a Fail\n", fail);

	return 0;
}
