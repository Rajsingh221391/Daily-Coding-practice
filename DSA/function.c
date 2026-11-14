#include <stdio.h>
#include <math.h>

int Square(int a)
{
    int result = pow(a,2);
    return result;
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("The square of the number %d is %d.", num, Square(num));

    return 0;
}