#include"Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name :         DisplayOddFactor
//  Input :                 Integrer
//  Output :                None
//  Description:            It is used to display odd factor numbers
//  Date :                  3 August 2020
//  Author name :           OMKAR NARENDRA RATNAPARKHI
//
///////////////////////////////////////////////////////////////////

void DisplayOddFactor(int iNo)                  
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
		if((iNo%iCnt)==0 && (iCnt%2)==1)
		{
			printf("%d\t",iCnt);
		}
	}	
	
}



