#include"Header.h"

int main()
{
	int iValue=0;
	BOOLEAN bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet==TRUE)
	{
		printf("Number is Dvisible by 5\n");
	}
	else
	{
		printf("Number is not Dvisible by 5\n");
	}

	return 0;	
}