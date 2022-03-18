#include<stdio.h>
void selection(int[], int);

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
        selection(a, n);
   printf("The sorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
return 0;
}

void selection(int a[], int n){
int temp, i ,j, index, least;
for(i = 0; i<n; i++){
    index = i;
    least = a[i];
    for(j = i+1; j<n; j++){
        if(a[j]<least){
            index = j;
            least = a[j];
        }
    }
    if(index !=i){
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }

}

}
