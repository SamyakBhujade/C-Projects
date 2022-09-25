// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int A[10];
  int i, even=0,odd=0;
  printf("enter the array value\n");
  
  for(i=0;i<10;i++)
  {
      scanf("%d",&A[i]);
      
      if(A[i]%2==0)
      even++;
      
      else
      odd++;
  }
  
  printf("there is %d even values",even);
  printf("there is %d od values " ,odd);
    return 0;
}