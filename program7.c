//Write a program which checks whether number is divisible by 3 and 5.

#include <stdio.h> //for printff and scanf
#include <stdbool.h> // for bool data type

////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckEvenOdd
// Input:         Integer
// Output:        Boolean
// Description:   Checks if input is divisible by 3 and 5
// Author:        Swaraj Nitin Mhatre
// Date:          25/04/2023
//
///////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo){
  if(((iNo % 3) ==0) && ((iNo % 5)==0)){
    return true;
  }
  else{
    return false;
  }
}

////////////////////////////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main(){
  int iValue =0; //variable to accept input
  bool bRet = false; //variable to accept return value

  printf("Please enter number to check whether it is divisible by 3 and 5:\n");
  scanf("%d", &iValue);

  bRet = CheckDivisible(iValue); //function call

  if(bRet == true){
    printf("%d is completely divisible by 3 and 5: ", iValue);
  }
  else{
    printf("%d is not completely divisible by 3 and 5: ", iValue);
    }

  return 0;
}


/*
  Logical Operators:
  1 : Logical AND &&
  2 : Logical OR  ||

  Expression1 
*/