#include <stdio.h>

int main()
{
    int a[]={10,20,30,40,50};
    int n = sizeof(a)/sizeof(a[0]); 

    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Size of the array is: %d",n);

    return 0;
}