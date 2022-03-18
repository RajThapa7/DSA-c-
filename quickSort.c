#include<stdio.h>
void quickSort(int[], int, int);
int partition(int[], int, int);

int main(){
    int n, a[100],l,r;
    l = 0;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    r= n-1;
    printf("Enter the unsorted array \n");
    for(int i = 0; i<n; i++){
    scanf("%d", &a[i]);
    }
    printf("The unsorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
     printf("\n");
        quickSort(a,l,r);
   printf("The sorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
return 0;
}

void quickSort(int a[], int l, int r){
if(l<r){
    int p = partition(a,l,r);
    quickSort(a,l,p-1);
    quickSort(a,p+1,r);
}

}

int partition(int a[], int l, int r){
int x, y;
x = l;
y = r;
int temp;
int pivot = a[l];
while(x<y){
    while(pivot >= a[x] ){
            x++;
    }
    while(pivot < a[y]){
        y--;
    }
    if(x<y){
        temp = a[x];
                a[x] = a[y];
        a[y] = temp;
    }

}
a[l] = a[y];
a[y] = pivot;
return y;
}

