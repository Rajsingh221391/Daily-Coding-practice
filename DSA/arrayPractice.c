/*Write a C program that:
1. Declares an integer array of size 5.
2. Takes five elements from the user.
3. Passes the array to a function named findSum().
4. Calculates and returns the sum of all elements.
5. Prints the sum inside main().*/

#include <stdio.h>

int findSum(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5;i++)
    {
        printf("Enter the %d element to be inserted:",i+1);
        scanf("%d", &arr[i]);
    }
    printf("%d",findSum(arr, 5));
    return 0;
}