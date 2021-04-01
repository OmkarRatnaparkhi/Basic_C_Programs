/*
    Problem statement : Accept one character from user and convert case of that character.
*/

/*
Algorithm
	START
		Accept character from user as value and store in variable value
		
		By Applying Condition if value is greater than A(Ascii Value) and less than Z(Ascii Value)
			If Yes
				then display value+32 i.e ascii value+32
			Otherwise
			if value is greater than a(Ascii Value) and less than z(Ascii Value)
			If Yes
				then display value+32 i.e ascii value+32	
	END 
	
*/

#include "Header.h"

int main()
{
	char cValue='\0';
	
	printf("Enter Character\n ");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}

























