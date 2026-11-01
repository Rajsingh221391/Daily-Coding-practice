#include <stdio.h>
#define MAX 10
int C_queu[MAX];
int rear = -1, front = -1;
void enqueue(int value)
{
    if((rear+1)%MAX==front)
    {
        printf("Circular_Queue overflow!\n");
        return;
    }
    if(front==-1)
        front = 0;
    rear = (rear + 1) % MAX;
    C_queu[rear] = value;

    printf("%d inserted in the Dequeue!\n", value);
}

void dequeue(void)
{
    if(front==-1)
    {
        printf("Queue Underflow!\n");
        return;
    }
    printf("%d popped from the Circular queue successfully\n", C_queu[front]);

    if(front==rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void peek(void)
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("%d is at the front of the queue.\n", C_queu[front]);
}

void display(void)
{
    if(front==-1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("---------------Queue---------------\n");
    int i = front;
    printf("Front<--");
    while (1)
    {
        printf("%d|", C_queu[i]);
        if (i==rear)
            break;

        i = (i + 1) % MAX;
    }
    printf("-->rear\n");
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
                printf("Enter the valid choice!\n");
        }
    } while (choice != 5);
    return 0;
}