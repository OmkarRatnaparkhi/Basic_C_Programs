/*
    Problem statement : Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
*/

/*
Algorithm
	START
		Accept character from user as value and store in variable value
		
		By Applying Condition if value is equal to A,E,I,O,U and a,e,i,o,u 
			If Yes
				then return true i.e it is vowel 
			Otherwise
				then return false i.e it is not vowel 
	END 	
*/

#include "Header.h"

int main()
{
	char cValue='\0';
	BOOL bRet = FALSE;
	
	printf("Enter Character\n ");
	scanf("%c",&cValue);
	
	bRet=ChkVowel(cValue);
	
	if(bRet==TRUE)
	{
		printf("Character is vowel");
	}
	else
	{
		printf("Character is not vowel");
	}
	
	return 0;
}

























