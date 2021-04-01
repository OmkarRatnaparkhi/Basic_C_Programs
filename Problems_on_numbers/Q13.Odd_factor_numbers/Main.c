/*
    Problem statement : Write a program which accept number from user and print odd factors of that
number
*/

/*
Algorithm
	START
		Accept  number from user as no and store in variable no
		
		Create one counter and initialize to 1
		
		Iterate till the counter is less than the number divided by 2 i.e no/2
			Check whether the cnt is divided by 2 and its remainder is 1 and the number is divided by cnt and its remainder zero
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
	
	DisplayOddFactor(iValue);
	
	return 0;
}

























