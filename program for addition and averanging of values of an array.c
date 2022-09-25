// Online C compiler to run C program online

//program for addition and averanging of values of an array 


#include <stdio.h>

 int main() {
  int marks[5]={15,17,12,19,20};
  int sum=0 ,i;
  float avg;
  for(i=0;i<5;i++)
  {
      printf("the value of an array are \n %d\n",marks[i]);
   
  }
   for(i=0;i<5;i++)
   {
       sum=sum+marks[i];
   
       printf("sum is %d\n",sum);
         
   }
   avg=sum/5;
   printf("avg is %f\n",avg);
     return 0;
 }







int main() {
 int marks[5]={15,17,12,19,20};
 int sum=0 ,i,index;
 float avg;
 for(i=0;i<5;i++)
 {
     printf("enter the index of array");
  scanf("%d",&index);
     
 
 
  for(i=0;i<5;i++)
  {
      sum=sum+marks[i];
     
      printf("sum is %d\n",sum);
      
      
           

  }
  
  avg=sum/5;
  printf("avg is %f\n",avg);
  break;
 }
    return 0;
}