#include <stdio.h>
#define MAX 10

int stack[MAX];
int top=-1;

int main()
{
    int choice,value;

    while(1)
    {
        printf("----------STACK MENU-----------\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK\n");
        printf("4.Check Empty\n");
        printf("5.Check Full\n");
        printf("6.Display\n");
        printf("7.EXIT\n");

        printf("Enter the choice:");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("Enter the value to be inserted:");
            scanf("%d",&value);
           
            if(top==MAX-1)
            {
                printf("Stack overflow.\n");
            }

            else
            {
                top++;
                stack[top]=value;
                printf("%d pushed into the stack.\n",value);
            }
        }

        else if(choice==2)
        {
            if(top==-1)
            {
                printf("Stack underflow.\n");
            }
            else
            {
                value=stack[top];
                top--;
                printf("%d popped from the stack.\n",value);
            }
        }
        else if(choice==3)
        {
            if(top==-1)
            {
                printf("Stack is empty.\n");
            }
            else
            {
                printf("%d is at the top of the stack.\n",stack[top]);
            }
        }
        else if(choice==4)
        {
            if(top==-1)
            {
                printf("Stack is empty.\n");
            }
            else
            {
                printf("Stack is not empty.\n");
            }
        }
        else if(choice==5)
        {
            if(top==MAX-1)
            {
                printf("Stack is full.\n");
            }
            else
            {
                printf("stack is not full.\n");
            }
        }
        else if(choice==6)
        {
            if(top==-1)
            {
                printf("Stack is empty");
            }
            else
            {
                printf("Stack elements are:\n");
                for(int i = top;i>=0;i--)
                {
                    printf("|");
                    printf("%d",stack[i]);
                    printf("|\n");
                }
            }
        }
        else if(choice==7)
        {
            printf("Program ended..");
            break;
        }
        else
        {
            printf("Invalid choice");
        }

    }
    return 0;
}