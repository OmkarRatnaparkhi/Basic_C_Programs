/*
    Problem statement : Accept one number from user if number is less than 10 then print
“Hello” otherwise print “Demo”.
*/

#include"Header.h"
int main()
{
	int iValue=0;
	
	printf("Enter Number:\t");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}