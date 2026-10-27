# include <stdio.h>
int main(void)
{
    int rows, cols;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("Enter the number of cols:");
    scanf("%d", &cols);

    int a[rows][cols];
    int sparse[rows * cols + 1][3];
    int k = 1;

    // printf("Enter the elements.\n");

    // Make a matrix of i rows and j cols.
    for (int i = 0; i < rows;i++)
    {
        for (int j = 0; j < cols;j++)
        {
            printf("Enter the element:");
            scanf("%d", &a[i][j]);
        }
    }

    sparse[0][0] = rows;
    sparse[0][1] = cols;

    for (int i = 0; i < rows;i++)
    {
        for (int j = 0; j < cols;j++)
        {
            if(a[i][j]!=0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = a[i][j];
                k++;
            }
        }
    }
    sparse[0][2] = k - 1;

    printf("Sparse matrix:\n");

    for (int i = 0; i < k;i++)
    {
        printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }
    return 0;
}