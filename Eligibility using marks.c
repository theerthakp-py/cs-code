#include <stdio.h>
void main() 
{
    int m,p,c,t;
    printf("enter the marks in maths, physics and chemistry: ");
    scanf("%d%d%d",&m,&p,&c);
    t=m+p+c;
    if(m>=60&&p>=50&&c>=40&&t>=200||(m+p)>=150) printf("you are eligible for admission");
    else printf("you are not eligible");
}
