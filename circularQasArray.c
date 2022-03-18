#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5


struct queue
{
    int front;
    int rear;
    int item[MAXSIZE];
};
typedef struct queue qu;

void enqueue(qu*);
void dequeue(qu*);
void traverse(qu*);

int main()
{
    qu *q;
    q->front = MAXSIZE - 1;
    q->rear = MAXSIZE - 1;
    int choice;
    while(choice!= 4)
    {
        printf("Menu for operation \n");
        printf("1. Enqueue \n 2. Dequeue \n 3. Traverse \n 4. Exit \n");
        printf("Enter the choice \n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            enqueue(q);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            traverse(q);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter no from 1 - 4 \n");
        }

    }
    return 0;
}

void enqueue(qu *q)
{
    if(q->front == (q->rear+1)%MAXSIZE)
    {
        printf("Queue overflow \n");

    }
    else
    {
        int n;
        printf("Enter the item to add \n");
        scanf("%d",&n);
        q->rear = (q->rear + 1)%MAXSIZE;

        q->item[q->rear] = n;

        printf("%d is added \n", n);
    }
}

void dequeue(qu *q)
{
    if(q->front == q->rear)
    {
        printf("Queue underflow \n");
    }

    else
    {
        int n = q->item[q->front];
        printf("%d is removed from queue \n", n);
        q->front = (q->front + 1)%MAXSIZE;
    }
}

void traverse(qu *q)
{
    if( q->front == q->rear)
    {
        printf("Queue underflow \n");
    }

    else
    {
        for(int i = (q->front + 1)%MAXSIZE; i!=q->rear; i=(i+1)%MAXSIZE)
        {
            printf("%d \t", q->item[i]);

        }
        printf("%d \t", q->item[q->rear]);

    }
}

