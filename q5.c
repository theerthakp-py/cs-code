#include<stdio.h>
#include<string.h>
struct details
{
    int rollno;
    char name[100];
    int mark;
};
struct details student[100],temp;
void main()
{
    int n,i,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter deatils of student %d",i+1);
        printf("\nRoll no: ");
        scanf("%d",&student[i].rollno);
        printf("Name: ");
        scanf("%s",student[i].name);
        printf("Mark: ");
        scanf("%d",&student[i].mark);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(strcmp(student[j-1].name,student[j].name)>0)
            {
                temp=student[j-1];
                student[j-1]=student[j];
                student[j]=temp;
            }
        }
    }
    printf("Alphabetical list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d,%s,%d\n",student[i].rollno,student[i].name,student[i].mark);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(student[j-1].rollno>student[j].rollno)
            {
                temp=student[j-1];
                student[j-1]=student[j];
                student[j]=temp;
            }
        }
    }
    printf("Roll no wise list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d,%s,%d\n",student[i].rollno,student[i].name,student[i].mark);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(student[j-1].mark<student[j].mark)
            {
                temp=student[j-1];
                student[j-1]=student[j];
                student[j]=temp;
            }
        }
    }
    printf("Rank wise list is:\n");
    for(i=0;i<n;i++)
    {
        printf("rank %d: %d,%s,%d\n",i+1,student[i].rollno,student[i].name,student[i].mark);
    }
}
