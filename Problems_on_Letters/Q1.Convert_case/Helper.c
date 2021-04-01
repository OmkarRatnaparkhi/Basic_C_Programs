#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         DisplayConvert
//  Input :                 Character
//  Output :                None
//  Description:            It is used to convert case of character
//  Date :                  3 August 2020
//  Author name :           OMKAR NARENDRA RATNAPARKHI
//
///////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)                  
{
	if((cValue >= 0 && cValue <= 64) || (cValue >= 91 && cValue <= 96) || (cValue >= 123 && cValue <= 127))
	{
		printf("Invalid Input");
	}
	
	if(cValue>='A' && cValue<='Z')
	{
		printf("%c",cValue+32);
	}
	
	else if(cValue>='a' && cValue<='z')
	{
		printf("%c",cValue-32);
	}
}

