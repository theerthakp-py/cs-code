#include <stdio.h>
void main() 
{
   int a[100][100],m,n,i,j,rs,cs;
   printf("enter the row and column size of matrix: ");
   scanf("%d%d",&m,&n);
   printf("enter the elements of matrix: ");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
            scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<m;i++)
   {
       rs=0;
       for(j=0;j<n;j++)
       {
            rs=rs+a[i][j];
       }
       printf("row sum of row %d=%d\n",i+1,rs);
   }
   for(j=0;j<n;j++)
   {
       cs=0;
       for(i=0;i<m;i++)
       {
            cs=cs+a[i][j];
       }
       printf("column sum of column %d=%d\n",j+1,cs);
   }
}
