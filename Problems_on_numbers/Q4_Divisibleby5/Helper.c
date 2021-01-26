#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Function name :        Check
// Parameters :            Integer
// Return value :          BOOLEAN
// Description :           It is used to check number divisible by 5 or not
// Author :                OMKAR NARENDRA RATNAPARKHI
// Date :                  25 July 2020
//
//////////////////////////////////////////////////////////////

BOOLEAN Check(int iNo)
{
	
	if((iNo % 5)==0)
	{
		return TRUE;
	}
	
	else
	{
		return FALSE;
	}
}