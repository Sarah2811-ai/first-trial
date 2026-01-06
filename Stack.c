#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

/* Function declarations */
int stack_isFull(void);
int stack_isEmpty(void);
void stack_isPush(int element);
void stack_isPop(void);
void stack_Display(void);

int main()
{
    int choice;
    int element;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &element);
            stack_isPush(element);
            break;

        case 2:
            stack_isPop();
            break;

        case 3:
            stack_Display();
            break;

        case 0:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}

/* Check if stack is full */
int stack_isFull(void)
{
    if (top == MAX - 1)
        return 1;   // full
    else
        return 0;   // not full
}

/* Check if stack is empty */
int stack_isEmpty(void)
{
    if (top == -1)
        return 1;   // empty
    else
        return 0;   // not empty
}

/* Push element into stack */
void stack_isPush(int element)
{
    if (stack_isFull() == 0)
    {
        top++;
        stack[top] = element;
        printf("Pushed %d into stack\n", element);
    }
    else
    {
        printf("Stack Overflow!\n");
    }
}

/* Pop element from stack */
void stack_isPop(void)
{
    if (stack_isEmpty() == 0)
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
    else
    {
        printf("Stack Underflow!\n");
    }
}

/* Display stack elements */
void stack_Display(void)
{
    if (stack_isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
