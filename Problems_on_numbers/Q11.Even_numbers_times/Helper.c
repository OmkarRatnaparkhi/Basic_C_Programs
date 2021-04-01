#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         PrintEven
//  Input :                 Integrer
//  Output :                None
//  Description:            It is used to display even numbers
//  Date :                  3 August 2020
//  Author name :           OMKAR NARENDRA RATNAPARKHI
//
///////////////////////////////////////////////////////////////////

void PrintEven(int iNo)                  
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if(iNo==0)
	{
		printf("Invalid Input");
	}
	
	for(iCnt=2;iCnt<=(iNo*2);iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}