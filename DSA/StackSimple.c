#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int value)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow!");
        return;
    }
    stack[++top] = value;
    printf("%d pushed into the stack Successfully :)\n", value);
}

void pop(void)
{
    if(top==-1)
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("%d popped from the stack!\n",stack[top]);
    top--;
}

void peek(void)
{
    if(top==-1)
    {
        printf("Stack is empty!");
        return;
    }
    printf("%d is at the top of the stack\n", stack[top]);
    
}

void display(void)
{
    if(top==-1)
    {
        printf("Stack is empty!");
        return;
    }
    for (int i = top; i >= 0;i--)
    {
        printf("|%d|\n", stack[i]);
    }
    printf("\n");
}

int main(void)
{
    int choice, value;

    do
    {
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value:");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...");
                break;

            default:
                printf("Enter a valid option!");
            }
    } while (choice != 5);
    return 0;
}
