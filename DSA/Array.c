#include <stdio.h>
int main()
{
    int value;
    int n;
    printf("Enter the number of element size:");
    scanf("%d",&n);
    int arr[n];

    
    for (int i = 0; i < n;i++)
    {
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }

    printf("--------Array elements--------\n");
    for (int i = 0; i < n;i++)
    {
        printf("|%d", arr[i]);
    }
    printf("|");
    printf("\n");
    return 0;
}