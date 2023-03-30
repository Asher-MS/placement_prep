#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *root = NULL;
void insert_end(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    struct node *temp = root;
    if (temp == NULL)
    {
        root = newnode;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void insert_beg(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    newnode->next = root;
    root = newnode;
}

void insert_pos(int data, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    struct node *temp = root;
    while (pos-- > 2 && temp != NULL)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void delete()
{
}

void reverse()
{
    struct node *current = root;
    struct node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    root = prev;
}
void display()
{
    if (root == NULL)
    {
        printf("Linked List is empty");
    }
    else
    {
        struct node *temp = root;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

int main()
{
    insert_end(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_beg(5);
    insert_pos(9, 2);
    display();
    reverse();
    display();
    return 0;
}