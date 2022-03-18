#include<stdio.h>
void bubble(int[], int);

int main(){
    int n, a[100];
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the unsorted array \n");
    for(int i = 0; i<n; i++){
    scanf("%d", &a[i]);
    }
    printf("The unsorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
     printf("\n");
        bubble(a, n);
   printf("The sorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
return 0;
}

void bubble(int a[], int n){
int i, j, temp;
for(i=0; i<n-1;i++){
    for(j = 0; j<n-i-1; j++){
        temp = a[j];
        if(a[j+1]< a[j]){
            a[j] = a[j+1];
            a[j+1] = temp;

        }
    }
}
}
