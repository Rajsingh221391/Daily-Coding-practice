#include <stdio.h>
#define MAX 10
int Dequeu[MAX];
int front = -1, rear = -1;

int isFull()
{
    return (rear + 1) % MAX==front;
}

int isEmpty()
{
    return front == -1;
}

void insertFront(int value)
{
    if(isFull())
    {
        printf("Queue overflow!\n");
        return;
    }
    if(isEmpty())
        front = rear = 0;
    
    else if(front==0)
        front = MAX - 1;
    
    else
        front--;
    

    Dequeu[front] = value;
    printf("%d inserted at the front successfully:)",value);
}

void insertRear(int value)
{
    if(isFull())
    {
        printf("Queue overflow!\n");
        return;
    }
    if(isEmpty())
    
        front = rear = 0;
    
    else
    
        rear = (rear + 1) % MAX;
    

    Dequeu[rear] = value;
    printf("%d inserted at the rear of queue", value);
}

void deleteFront(void)
{
    if(isEmpty())
    {
        printf("Deque is undeflow!\n");
        return;
    }

    printf("%d deleted from front.\n", Dequeu[front]);

    if(front==rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void deleteRear(void)
{
    if(isEmpty())
    {
        printf("Deque underflow!\n");
        return;
    }

    printf("%d deleted from rear.\n", Dequeu[rear]);

    if(front==rear)
        front = rear = -1;
    else if (rear==0)
        rear = MAX - 1;
    else
        rear--;
}

void display()
{
    if(isEmpty())
    {
        printf("Deque is empty!\n");
        return;
    }

    int i = front;

    printf("Front<--");

    while(1)
    {
        printf("%d|", Dequeu[i]);

        if(i==rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("-->Rear\n");
}

int main(void)
{
    int choice, value;

    do
    {
        printf("\n------ DEQUE MENU ------\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertRear(value);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}