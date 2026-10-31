#include <stdio.h>
#include <stdlib.h>
float main()
{
    int x = 10;
    int *p = &x;
    int *q = &x;
    printf("%p\n", (void*)p);
    printf("%p\n", (void*)q);

    int arr[3] = {0, 2, 3};
    int *a = arr;
    printf("%d\n", *a);
    a++;
    printf("%d\n", *(a+2));

    int newarr[5] = {1, 2, 3, 4, 5};
    int *p2 = &newarr[1];
    int *p3 = &newarr[3];
    printf("%ld\n", p3-p2);

    int *m = malloc(4*sizeof(int));
    // m[0] = 1;
    // m[1] = 2;
    printf("%d\n", m[1]);
}