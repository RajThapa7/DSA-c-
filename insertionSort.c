#include<stdio.h>
void insertion(int[], int);

int main()
{
    int n, a[100];
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the unsorted array \n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The unsorted array is \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    insertion(a, n);
    printf("The sorted array is \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}

void insertion(int a[], int n)
{
    int i,j,temp;
    for(i = 0; i<n; i++)
    {
        temp = a[i];
        j = i - 1;
        while(j>=0 && temp < a[j])
        {
            a[i] = a[j];
            j--;
        }
        a[j+1] = temp;

    }
}
