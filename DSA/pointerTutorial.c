#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 20;
    printf("your value is %d\n", a);
    printf("The memory address of integer a is %p\n", (void *)&a);

    int *ptr = malloc(5 * sizeof(int));

    ptr[0] = 25;
    free(ptr);
    ptr = NULL;
    printf("%d", ptr[0]);
    return 0;
}