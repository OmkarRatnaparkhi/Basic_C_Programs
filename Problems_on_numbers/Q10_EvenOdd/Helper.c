#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        ChkEvenOdd
// Parameters :            Integer
// Return value :          Integer/BOOLEAN
// Description :           It is used to check number is even / odd
// Author :                OMKAR NARENDRA RATNAPARKHI
// Date :                  25 July 2020
//
//////////////////////////////////////////////////////////////


BOOLEAN ChkEvenOdd(int iNo)
{
    int iResult = 0;                              
    
    iResult = iNo % 2;       
    
    if(iResult == 1)         
    {
        return FALSE;       
    }
    else
    {
        return TRUE;        
    }
}

