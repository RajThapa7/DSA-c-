#include<stdio.h>
#include<stdlib.h>

#define NULL 0

struct node
{
    int info;
    struct node *next;
};
typedef struct node Nodetype;
Nodetype *head = NULL;

void insertAtFront();
void insertAtEnd();
void insertAtPos();
void deleteAtFront();
void deleteAtEnd();
void deleteAtPos();
void traverse();
void search();
int main()
{
    int choice;
    while(choice!=9)
    {
        printf("Menu for operation \n");
        printf("1.Insert at Front \n 2. Insert at end \n 3. Insert at given pos \n 4.Delete at Front \n 5. Delete at end \n. 6. Delete at given pos \n 7. Traverse \n 8. Search \n 9. Exit \n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insertAtFront();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPos();
            break;
        case 4:
            deleteAtFront();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            deleteAtPos();
            break;
        case 7:
            traverse();
            break;
        case 8:
            search();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Enter a number from 1 - 9 \n");
        }
    }
    return 0;
}

void insertAtFront()
{
    Nodetype *temp, *newnode;
    int n;
    newnode = (Nodetype*)malloc(sizeof(Nodetype));
    printf("Enter the item to be inserted \n");
    scanf("%d", &n);
    newnode->info = n;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        printf("%d is added \n", newnode->info);

    }
    else
    {
        newnode->next = head;
        head = newnode;
        printf("%d is added \n", newnode->info);

    }
}
void insertAtEnd()
{
    Nodetype *temp, *newnode;
    int n;
    newnode = (Nodetype*)malloc(sizeof(Nodetype));
    printf("Enter the item to be inserted \n");
    scanf("%d", &n);
    newnode->info = n;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        printf("%d is added \n", newnode->info);

    }
    else
    {
        temp = head;
        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        printf("%d is added \n", newnode->info);

    }
}
void insertAtPos()
{
    Nodetype *temp, *newnode;
    int n;
    int pos;
    newnode = (Nodetype*)malloc(sizeof(Nodetype));
    printf("Enter the item to be inserted \n");
    scanf("%d", &n);
    printf("Enter the position to be inserted at \n");
    scanf("%d", &pos);
    newnode->info = n;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        printf("%d is added \n", newnode->info);

    }
    else
    {
        int i;
        temp = head;
        for(i = 1; i< pos-1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next->next;
        temp->next = newnode;
        printf("%d is added \n", newnode->info);

    }
}
void deleteAtFront()
{
    Nodetype *temp;
    if(head == NULL)
    {
        printf("Empty list \n");
    }
    else if(head->next == NULL)
    {
        printf("%d is deleted \n", head->info);
        head = NULL;
    }
    else
    {
        temp = head;
        head = head->next;
        printf("%d is deleted \n", temp->info);
        free(temp);
    }
}
void deleteAtEnd()
{
    Nodetype *temp;
    if(head == NULL)
    {
        printf("Empty list \n");
    }
    else if(head->next == NULL)
    {
        printf("%d is deleted \n", head->info);
        head = NULL;
    }
    else
    {
        temp = head;
        while(temp->next->next!= NULL)
        {
            temp = temp->next;
        }
        printf("%d is deleted \n", temp->next->info);
        temp->next = NULL;
    }
}
void deleteAtPos()
{
    if(head == NULL)
    {
        printf("Empty list \n");
    }
    else
    {
        Nodetype *temp;
        int pos;
        int i;
        printf("Enter the position you want to delete element from \n");
        scanf("%d",&pos);
        temp = head;
        for(i = 1; i< pos-1; i++)
        {
            temp= temp->next;
        }
        printf("%d is deleted \n", temp->next->info);
        temp->next = temp->next->next;
    }
}
void traverse()
{
    Nodetype *temp;
    temp = head;
    if(head == NULL)
    {
        printf("Empty list \n");
    }
    else
    {
        printf("List is :\n");
        while(temp!= NULL)
        {
            printf("%d \t", temp->info);
            temp= temp->next;
        }
    }
}
void search()
{
    if(head == NULL)
    {
        printf("Empty list \n");
    }
    else
    {
        Nodetype *temp;
        int key;
        printf("Enter the element you want to search \n");
        scanf("%d", &key);
        temp = head;
        while(temp!= NULL)
        {
            if(temp->info == key){
                printf("Search Successfull \n");
                break;
            }
            temp= temp->next;
        }
        if(temp == NULL){
            printf("Search unsuccessfull \n");
        }
    }

}

