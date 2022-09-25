
#include <stdio.h>

int main()
{
   int i,j,sum=0;
   int A[2][3];
   printf("enter the array value");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
       scanf("%d",&A[i][j]);
    }
}
    printf("matrix is \n");
    for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
      printf("%d\t",A[i][j]);
      sum=sum+A[i][j];
      
    }
    printf("\n");
}

 
  printf("\nthe sum of array is=%d",sum);  
  

    return 0;
}



/*enter input 10 20 30 40 50 60
you wil get matrix
10	20	30	
10	20	30
and the sum of array is=120
*/