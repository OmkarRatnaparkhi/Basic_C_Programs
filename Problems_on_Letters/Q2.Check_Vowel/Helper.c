#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         ChkVowel
//  Input :                 Character
//  Output :                BOOL
//  Description:            It is used to check whether that character is vowel
//  Date :                  3 August 2020
//  Author name :           OMKAR NARENDRA RATNAPARKHI
//
///////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)             
{
	
	if(cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U' || cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

