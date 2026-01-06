#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

/* Function declarations */
int queue_isFull(void);
int queue_isEmpty(void);
void queue_enqueue(int element);
void queue_dequeue(void);
void queue_display(void);

int main()
{
    int choice;
    int element;

    while (1)
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%d", &element);
            queue_enqueue(element);
            break;

        case 2:
            queue_dequeue();
            break;

        case 3:
            queue_display();
            break;

        case 0:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}

/* Check if queue is full */
int queue_isFull(void)
{
    if (rear == MAX - 1)
        return 1;   // full
    else
        return 0;   // not full
}

/* Check if queue is empty */
int queue_isEmpty(void)
{
    if (front == -1 || front > rear)
        return 1;   // empty
    else
        return 0;   // not empty
}

/* Enqueue operation */
void queue_enqueue(int element)
{
    if (queue_isFull() == 0)
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = element;
        printf("Enqueued %d\n", element);
    }
    else
    {
        printf("Queue is full\n");
    }
}

/* Dequeue operation */
void queue_dequeue(void)
{
    if (queue_isEmpty() == 0)
    {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
    else
    {
        printf("Queue is empty\n");
    }
}

/* Display queue elements */
void queue_display(void)
{
    if (queue_isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}
