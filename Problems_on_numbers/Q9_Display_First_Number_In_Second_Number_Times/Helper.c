#include"Header.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name       : Display
//	Parameters/Input    : Integer,Integer
//	Return Value/Output : None
//	Description         : It is use to display first number in second number times  
//	Author Output       : OMKAR NARENDRA RATNAPARKHI
//	Date                : 25 July 2020
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
	int iCnt=0;
	
	if(iFrequency<0)
	{
		iFrequency=-iFrequency;
	}
	
	for(iCnt=1 ;iCnt<=iFrequency ;iCnt++)
	{
		printf("%d\t",iNo);
	}
}