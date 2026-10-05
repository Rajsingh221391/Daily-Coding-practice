//Find the maximum and minimum value in array, in a single pass through the array.
#include <stdio.h>

int main()
{
    int arr[]={4,2,9,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(n==0)
    {
        printf("Array is empty.\n");
        return 0;
    }

    //step 1: Assume the first number element is both maximum and minimum
    int max = arr[0];
    int min = arr[0];

    //step 2: Single pass starting from index 1
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("max = %d, min = %d\n",max,min);

    return 0;
}