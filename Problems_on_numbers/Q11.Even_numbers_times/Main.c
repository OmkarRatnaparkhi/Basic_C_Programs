/*
    Problem statement : Write a program which accept one number from user and print that number of even numbers on screen.
*/

/*
Algorithm
	START
		Accept  number from user as no and store in variable no
		
		Create one counter and initialize to 2
		
		Iterate till the counter is less than the number*2 i.e no*2 
			Check whether the cnt is divided by 2 and remainder is zero
				If yes 
					then display the counter
				Increment the value of counter by 1
		Continue to the iteration
	END 
 */

#include "Header.h"

int main()
{
	int iValue=0;
	
	printf("Enter Number\n ");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}

























