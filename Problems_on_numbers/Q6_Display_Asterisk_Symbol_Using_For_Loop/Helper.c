#include "Header.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name       : Display
//	Parameters/Input    : Integer
//	Return Value/Output : None
//	Description         : It is use to display "*"   
//	Author Output       : OMKAR NARENDRA RATNAPARKHI
//	Date                : 25 July 2020
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1 ;iCnt<=iNo ;iCnt++)
	{
		printf("*\t");
	}
}