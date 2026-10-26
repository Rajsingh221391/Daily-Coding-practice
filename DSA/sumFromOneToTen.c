#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 10;
    for (int i = 1; i <= n;i++)
    {
        sum = sum + i;
    }
    printf("The sum of the numbers from 1 to %d is %d",n,sum);
}