#include "Header.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name       : Display
//	Parameters/Input    : Integer
//	Return Value/Output : None
//	Description         : It is use to display "*"   
//	Author Output       : OMKAR NARENDRA RATNAPARKHI
//	Date                : 25 July 2020
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt=1;
	while(iCnt<=iNo)
	{
		printf("*\t");
		iCnt++;
	}
}

/*
void Display(int iNo)
{
	int iCnt=1;
	while(iNo>=iCnt)
	{
		printf("*\t");
		iCnt--;
		iCnt=iCnt+2;
	}
}
*/