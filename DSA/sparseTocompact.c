#include <stdio.h>

int main()
{
    int matrix[10][10],sparse[100][3];

    int rows,cols;
    int i, j;
    int nonzero=0;

    // Input size of matrix
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    printf("Enter the number of cols:");
    scanf("%d",&cols);

    // placing the elements of the matrix
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Enter the element:");
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]!=0)
            {
                nonzero++;
            }
        }
    }

    // first row of sparse matrix
    sparse[0][0]=rows;
    sparse[0][1]=cols;
    sparse[0][2]=nonzero;

    int k=1;

    // store non_zero elements
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(matrix[i][j]!=0)
            {
                sparse[k][0]=rows;
                sparse[k][1]=cols;
                sparse[k][2]=matrix[i][j];

                k++;
            }
        }
    }

    // Display sparse matrix

    printf("-----3 tuple represention of matrix(Sparse matrix)-----\n");
    printf("|Row\t|Column\t|Value\t|\n");
    printf("-------------------------\n");

    for(i=0;i<=nonzero;i++)
    {
        printf("|%d\t|%d\t|%d\t|\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }
    return 0;



}