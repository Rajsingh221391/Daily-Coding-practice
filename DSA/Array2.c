#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of the array: ");

    if (scanf("%d", &n) != 1||n<=0)//scanf() returns the number of input items successfully read and assigned.
    {
        printf("Invalid entry!");
        return 1;
    }
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n;i++)
    {
        printf("Enter the value: ");
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
        sum = sum + arr[i];
    }
    printf("\n-------------ARRAY ELEMENTS--------------\n");
    printf("|");

    for (int i = 0;i < n;i++)
    {
        printf("%d|", arr[i]);
    }
    printf("\n");

    printf("Sum of the array elements is %d", sum);

    return 0;
}