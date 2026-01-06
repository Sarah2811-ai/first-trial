#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int id;
    char gpa;
    struct node *nextNode;
} myNode;

int main()
{
    myNode *node1 = (myNode *)malloc(sizeof(myNode));
    node1->id = 110;
    node1->gpa = 'a';
    node1->nextNode = NULL;

    myNode *node2 = (myNode *)malloc(sizeof(myNode));
    node2->id = 22;
    node2->gpa = 'd';
    node2->nextNode = NULL;

    myNode *node3 = (myNode *)malloc(sizeof(myNode));
    node3->id = 72;
    node3->gpa = 'd';
    node3->nextNode = NULL;

    /* Link the nodes */
    node1->nextNode = node2;
    node2->nextNode = node3;

    /* Head points to the first node */
    myNode *Head = node1;

    /* Traversal pointer */
    myNode *temp = Head;

    while (temp != NULL)
    {
        printf("ID: %d, GPA: %c\n", temp->id, temp->gpa);
        temp = temp->nextNode;
    }

    /* Free memory */
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
