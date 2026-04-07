#include<stdio.h>
void main()
{
  int sum=0,i=0;
  for(int num=101;num<200;num++)
  {
    if(num%7==0)
    {
    sum+=num;
    i++;
    }
  }
  printf("%d is the number and %d is the sum of all integers greater than 100 and less than 200 that are divisible by 7",i,sum);
}
