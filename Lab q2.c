#include<stdio.h>
int m1,m2,m3;
void largest();
void smallest();
void average();
void main()
{
    printf("\nEnter mark of subject 1,2 and 3 out of 100: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    largest();
    smallest();
    average();
}
void largest()
{
    if (m1>m2)
    {
        if(m1>m3) printf("\nMark of subject 1 is largest");
        else printf("\nMark of subject 3 is largest");
    }
    else
    {
        if(m2>m3) printf("\nMark of subject 2 is largest");
        else printf("\nMark of subject 3 js largest");
    }
}
void smallest()
{
    if(m1<m2&&m1<m3) printf("\nMark of subject 1 is smallest");
    else if(m2<m1&&m2<m3) printf("\nMark of subject 2 is smallest");
    else printf("\nMark of subject 3 is smallest");
}
void average()
{
    int avg=(m1+m2+m3)/3;
    printf("\nAverage is %d",avg);
    int V=(avg>=50)?1:0;
    printf("\nV is %d",V);
}
