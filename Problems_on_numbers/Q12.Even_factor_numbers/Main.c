/*
    Problem statement : Write a program which accept number from user and print factors of that number
*/

/*
Algorithm
	START
		Accept  number from user as no and store in variable no
		
		Create one counter and initialize to 1
		
		Iterate till the counter is less than the number divided by2 i.e no/2
			Check whether the number is divided by cnt and remainder is zero and cnt is divided by 2 and remainder is 0
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
	
	DisplayFactor(iValue);
	
	return 0;
}




























