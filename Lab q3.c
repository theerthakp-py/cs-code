#include<stdio.h>
#define PI 3.14
void sinx();
void cosx();
void sum();
void main()
{
    sinx();
    cosx();
    sum();
}
void sinx()
{
    float d,x,term,sum;
    int i=1;
    printf("Enter angle in degree: ");
    scanf("%f",&d);
    x=d*PI/180;
    term=sum=x;
    while(term>0.000001||term<-0.000001)
    {
        i+=2;
        term=-term*x*x/i*(i-1);
        sum+=term;
    }
    printf("sin %f=%f",d,sum);
}
void cosx()
{
    float d,x,term,sum;
    int i=1;
    printf("\nEnter angle in degree: ");
    scanf("%f",&d);
    x=d*PI/180;
    term=sum=1;
    while(term>0.000001||term<-0.000001)
    {
        i+=2;
        term=-term*x*x/i*(i-1);
        sum+=term;
    }
    printf("cos %f=%f",d,sum);
}
void sum()
{
    float term=1,sum=0;
    int i=1,j;
    while(term>0.000001)
    {
        term=1;
        for(j=1;j<=i;j++)
        {
            term/=i;
        }
        sum+=term;
        i++;
    }
    printf("\nSum=%f",sum);
}
