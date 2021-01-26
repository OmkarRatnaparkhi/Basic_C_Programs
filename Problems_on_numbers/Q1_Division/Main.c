/*
    Problem statement : Accept two numebrs from user and return its division.
*/

/*
Algorithm
	START
		Accept first number from user as no1 
		Accept second number from user as no2
		Create one ans variable
		Divide no1(dividend) number by no2(divisor)
		Store the quotient/result in ans
		return the value from ans
	END 
 */

#include "Header.h"

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	
	printf("Enter First Number(Dividend)\n ");
	scanf("%d",&iNo1);
	
	printf("Enter Second Number(Divisor)\n ");
	scanf("%d",&iNo2);
	
	iRet = Division(iNo1,iNo2);    
	
	printf("Division of two numbers is:%d\n",iRet);
	
	return 0;
}

























