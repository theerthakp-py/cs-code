#include <stdio.h>
void main() 
{
   int a[100][100],m,n,i,j;
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
   printf("matrix is:\n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
            printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
}
