#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
    int n, i, *a, s=0;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    a = (int*)calloc(n, sizeof(int));
    printf("Enter %d numbers \n", n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", (a+i));
    }
    printf("The sum is \n");
    for(i = 0; i<n; i++)
    {
        s+=*(a+i);
    }
    printf("%d \n", s);
    printf("Enter again for second sum \n");
    scanf("%d", &n);

    a= (int*)realloc(a, n);
    printf("Enter %d numbers \n", n);

    for(i = 0; i<n; i++)
    {
        scanf("%d", (a+i));
    }
    printf("The sum is \n");
    s = 0;

    for(i = 0; i<n; i++)
    {
        s+=*(a+i);
    }
    printf("%d", s);
    free(a);
    return 0;
}

