/*
    Problem statement : Accept one number from user and print that number of * on screen using for loop.
*/

#include "Header.h"

int main()
{
	int iValue=0;
	
	printf("Enter Number:\t");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}