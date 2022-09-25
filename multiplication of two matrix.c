

   
#include <stdio.h>
#define N 50

int main ()
{
  int A[N][N], B[N][N],C[N][N];
  int i, j,r1,r2,c1,c2,sum,k;
  
  printf("enter the number of rows and columns for first matrix\n");
  scanf("%d %d",&r1,&c1);
  
  printf ("enter first the matrix value\n");
  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
	{
	  scanf ("%d",&A[i][j]);
	}
    }
    
    
 printf("enter the number of rows and columns for second matrix\n");
 
  scanf("%d %d",&r2,&c2);
  printf ("enter the second matrix value\n");

  for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
	{
	  scanf ("%d",&B[i][j]);
	}
    }

  printf ("\nthe first matrix is\n");

  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
	{
	  printf ("%d ",A[i][j]);
	}
      printf ("\n");
    }

  printf ("\nthe second matrix is\n");

  for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
	{
	  printf ("%d ", B[i][j]);
	}
      printf ("\n");
    }

printf ("\n");

if (c1!=r2)

{
    printf("cannot be multiply");
}

else
{
  for (i = 0; i < r1; i++)
    {
       

      for (j = 0; j < c2 ; j++)
	{
	      sum=0;
	    for(k=0;k<r1;k++)
{
	 sum=sum+(A[i][k]*B[k][j]);
}

    C[i][j]=sum;
	}
	
    }
    printf(" the multiplication is\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2 ; j++)
	{
	    printf("%d ",C[i][j]);
}
 printf ("\n");
    }
}
  return 0;
}

/*when input is 
enter the number of rows and columns for first matrix
2 
2
enter first the matrix value
2
3
3
5
enter the number of rows and columns for second matrix
2
2
enter the second matrix value
2
3
6
5
output is
the first matrix is
2 3 
3 5 

the second matrix is
2 3 
6 5 

*/

/*when input
enter the number of rows and columns for first matrix
3 
3
enter first the matrix value
1 2 3 1 2 3 1 2 3
enter the number of rows and columns for second matrix
3 3
enter the second matrix value
1 2 3 1 2 3 1 2 3

then output is

the first matrix is
1 2 3 
1 2 3 
1 2 3 

the second matrix is
1 2 3 
1 2 3 
1 2 3 

 the multiplication is
6 12 18 
6 12 18 
6 12 18 
*/

/*when input is -
enter the number of rows and columns for first matrix
3 2
enter first the matrix value
1 2 3 1 2 3
enter the number of rows and columns for second matrix
2 2
enter the second matrix value
1 2 3 4

the output is 
the first matrix is
1 2 
3 1 
2 3 

the second matrix is
1 2 
3 4 

 the multiplication is
7 10 
6 10 
11 16 
*/

/*when inputis -
enter the number of rows and columns for first matrix
3 3
enter first the matrix value
1 2 3 1 2 3 1 2 3
enter the number of rows and columns for second matrix
2 3
enter the second matrix value
1 2 3 4 5 6
output is-
the first matrix is
1 2 3 
1 2 3 
1 2 3 

the second matrix is
1 2 3 
4 5 6 

cannot be multiply
*/