#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5
int top = -1;
int stack[MAXSIZE];

void push();
void pop();
void display();
int IsFull();
int IsEmpty();


int main()
{
    int choice;
    while(choice !=6){
    printf("Menu for operation \n");
    printf(" 1. Push \n 2. Pop \n 3. Display \n 4. IsFull \n 5. IsEmpty \n 6. Exit \n");
    printf("Enter the choice \n");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;

    case 3:
        display();
        break;

    case 4:
        IsFull();
        break;

    case 5:
        IsEmpty();
        break;

    case 6:
        exit(0);
        break;

    default:
        printf("Enter a number from 1 to 6 \n");
    }
}
    return 0;
}

void push()
{
if(top == MAXSIZE-1)
    {
        printf("Stack overflow \n");
    }
    else{
        int num;
        printf("Enter a number to push \n");
        scanf("%d", &num);
        top += 1;
        stack[top] = num;
        printf("%d is added to the stack \n", num);
    }
}
void pop()
{
    if(top <0)
    {
        printf("Stack underflow \n");
    }
    else
    {
        int item = stack[top];
        printf("%d is removed from stack \n", item);
        top--;
    }
}

int IsFull()
{
    if(top == MAXSIZE-1)
    {
        printf("Stack overflow \n");
        return 1;
    }
    else
    {
        printf("Not full");
        return 0;
    }
}

int IsEmpty()
{
    if(top <0)
    {
        printf("Stack underflow \n");
        return 1;
    }
    else
    {
        printf("Not empty");
        return 0;
    }
}

void display()
{
    if(top <0)
    {
        printf("Stack underflow \n");
    }
    else
    {

        while(top>= 0)
        {
            printf("%d \n", stack[top]);
            top--;
        }
    }
}
