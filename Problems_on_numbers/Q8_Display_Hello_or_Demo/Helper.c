#include"Header.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name       : Display
//	Parameters/Input    : Integer
//	Return Value/Output : None
//	Description         : It is use to display Hello if number is less then 10 ortherwise it will display Demo.   
//	Author Output       : OMKAR NARENDRA RATNAPARKHI
//	Date                : 25 July 2020
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}