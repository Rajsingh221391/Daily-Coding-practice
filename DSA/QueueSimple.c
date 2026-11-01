#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1,rear = -1;

void enqueue(int value)
{
    if(rear==MAX-1)
    {
        printf("Queue overflow!\n");
        return;
    }
    if(front==-1)
        front = 0;

    queue[++rear] = value;
    printf("%d inserted into the queue successfully!\n",value);
}

void dequeue(void)
{
    if(front==-1)
    {
        printf("Queue Underflow!\n");
        return;
    }
    printf("%d removed from the queue\n", queue[front]);

    if(front==rear)
        front = rear = -1;
    else
        front++;
}
void peek(void)
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("%d at the front of queue\n", queue[front]);
}

void display(void)
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("FrontSide------------Queue-------------RearSide\n");
    printf("Front<--");

    for (int i = front; i <= rear;i++)
    {
        printf("|%d", queue[i]);
    }
    printf("-->Rear");
    printf("\n");
}

int main(void)
{
    int choice, value;

    do
    {
        printf("\n1.enqueue\n2.deque\n3.peek\n4.display\n5.Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value:");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                    dequeue();
                    break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("exiting...");
                break;

            default:
                printf("Enter the valid choice!n\n");
        }
    } while (choice != 5);
    return 0;
}