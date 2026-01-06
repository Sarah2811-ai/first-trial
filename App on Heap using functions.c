#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int id;
    char gpa;
    struct node *nextNode;
} myNode;

myNode *Head = NULL;

/* Create a new node and add it to the end */
void createNode(int id, char gpa)
{
    myNode *temp;
    myNode *newnode = (myNode *)malloc(sizeof(myNode));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->id = id;
    newnode->gpa = gpa;
    newnode->nextNode = NULL;

    if (Head == NULL)
    {
        Head = newnode;
    }
    else
    {
        temp = Head;
        while (temp->nextNode != NULL)
        {
            temp = temp->nextNode;
        }
        temp->nextNode = newnode;
    }
}

/* Print all nodes */
void printnode(void)
{
    myNode *temp = Head;

    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL)
    {
        printf("ID: %d, GPA: %c\n", temp->id, temp->gpa);
        temp = temp->nextNode;
    }
}

/* Delete a node by ID */
void deleteNode(int id)
{
    myNode *curr = Head;
    myNode *prev = NULL;

    while (curr != NULL)
    {
        if (curr->id == id)
        {
            if (prev == NULL)
                Head = curr->nextNode;
            else
                prev->nextNode = curr->nextNode;

            free(curr);
            printf("Node with ID %d deleted.\n", id);
            return;
        }

        prev = curr;
        curr = curr->nextNode;
    }

    printf("Node with ID %d not found.\n", id);
}

/* Search a node by ID */
void searchNode(int id)
{
    myNode *temp = Head;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            printf("Node found!\n");
            printf("ID: %d, GPA: %c\n", temp->id, temp->gpa);
            return;
        }
        temp = temp->nextNode;
    }

    printf("Node with ID %d not found.\n", id);
}

/* Edit GPA of a node */
void editNode(int id)
{
    myNode *temp = Head;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            printf("Enter new GPA: ");
            scanf(" %c", &temp->gpa);
            printf("GPA updated successfully.\n");
            return;
        }
        temp = temp->nextNode;
    }

    printf("Node with ID %d not found.\n", id);
}

int main()
{
    int choice = 0;
    int id;
    char gpa;

    do
    {
        printf("\n1- Create node\n");
        printf("2- Print nodes\n");
        printf("3- Delete node\n");
        printf("4- Search node\n");
        printf("5- Edit node\n");
        printf("0- Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter ID: ");
            scanf("%d", &id);
            printf("Enter GPA (char): ");
            scanf(" %c", &gpa);
            createNode(id, gpa);
            break;

        case 2:
            printnode();
            break;

        case 3:
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            deleteNode(id);
            break;

        case 4:
            printf("Enter ID to search: ");
            scanf("%d", &id);
            searchNode(id);
            break;

        case 5:
            printf("Enter ID to edit: ");
            scanf("%d", &id);
            editNode(id);
            break;
        }

    } while (choice != 0);

    return 0;
}
sssss
