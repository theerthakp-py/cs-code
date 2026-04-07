#include <stdio.h>
void main() 
{
    int a,b,c,d,m,n,x1,x2;
    printf("enter the values of a,b,c,d,m and n: ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
    if(a*d-c*b!=0)
    {
        x1=(m*d-b*n)/(a*d-c*b);
        x2=(n*a-m*c)/(a*d-c*b);
        printf("x1=%d\nx2=%d",x1,x2);
    }
    else printf("ad-bc=0: solution cant be calculated");
}
