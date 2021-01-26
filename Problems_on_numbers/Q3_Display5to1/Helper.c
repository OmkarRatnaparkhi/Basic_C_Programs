#include"Header.h"
////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input : 		None
//  Output : 		None
//  Description : 	It is used to display 5 to 1 numbers 
//  Autor : 		OMKAR NARENDRA RATNAPARKHI
//  Date : 			25 July 2020
//
////////////////////////////////////////////////////////////////////

void Display()
{
	int iCnt=0;
	
	for(iCnt=5;iCnt>=1;--iCnt)
	{
		printf("%d\n",iCnt);
	}
}


/*
void Display()
{
	int iCnt=0;
	iCnt=5;
	for(iCnt=5;iCnt>=1;iCnt)
	{
		printf("%d\n",iCnt);
		iCnt++;
		iCnt=iCnt-2;
	}
}
*/	