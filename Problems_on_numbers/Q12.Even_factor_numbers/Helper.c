#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         DisplayFactor
//  Input :                 Integrer
//  Output :                None
//  Description:            It is used to display even factor numbers
//  Date :                  3 August 2020
//  Author name :           OMKAR NARENDRA RATNAPARKHI
//
///////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)                  
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
	
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0 && (iCnt%2)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}



