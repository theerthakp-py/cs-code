#include<stdio.h>
void saddle(int[100][100],int,int);
void large_2(int[100][100],int,int);
void main()
{
    int m,n,a[100][100],i,j;
    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    saddle(a,m,n);
    large_2(a,m,n);
}
void saddle(int a[100][100],int m,int n)
{
    int i,j,row_min,y,yes=0;
    for(i=0;i<m;i++)
    {
        row_min=a[i][0];
        int column=0;
        for(j=1;j<n;j++)
        {
            if(row_min>a[i][j])
            {
                row_min=a[i][j];
                column=j;
            }
        }
        for(y=0;y<n;y++)
        {
            if(row_min<a[y][column])
            {
                break;
            }
        }
        if(y==n)
        {
            printf("Saddle point:%d at position row %d and column %d",row_min,i+1,column+1);
            yes=1;
        }
    }
    if (yes==0)
    {
        printf("No saddle point");
    }
}
void large_2(int a[100][100],int m, int n)
{
    int i,j,largest,second;
    largest=second=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>largest)
            {
                second=largest;
                largest=a[i][j];
            }
            else if(a[i][j]>second&&a[i][j]!=largest)
            {
                second=a[i][j];
            }
        }
    }
    printf("\nSecond largest is %d",second);
}
