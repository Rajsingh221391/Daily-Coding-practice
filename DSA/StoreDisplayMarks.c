#include <stdio.h>
#define MAX 100

int main(void)
{
    int marks[MAX];
    int i,n;

    printf("Enter the number of students:");
    scanf("%d",&n);

    if(n<1 || n>MAX)
    {
        printf("Invalid number of students!");
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter the marks for the student %d:",i+1);
        scanf("%d",&marks[i]);
    }

    printf("\nMarks stored for the students\n");

    for(i=0;i<n;i++)
    {
        printf("Student %d:marks %d\n",i+1,marks[i]);
    }

    return 0;
}