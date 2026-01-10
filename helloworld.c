
#include <stdio.h> ///library for printf
int main(void) ///where does the program start
{
	printf("please enter an integer: \n"); //print statement
	int int1; //introduce integer variable
	scanf_s("%d", &int1);

	printf("you have been assigned %d for today", int1);

	return 0;
}