#include <stdio.h>

int main(){
  int No1 =10;
  int No2 =11;
  int Ans =0;
  printf("\n Enter first number: ");
  scanf("%d", &No1);

  printf("\n Enter second number:");
  scanf("%d", &No2);

  Ans = No1 + No2;
  printf("\nAddition is %d\n", Ans);
  return 0;
}