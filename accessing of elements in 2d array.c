/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j;
   int A[2][3]={{1,2},{-1,5,4}};
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("A[%d][%d]=%d\n",i,j,A[i][j]);
    }
}
       
   

    return 0;
}
