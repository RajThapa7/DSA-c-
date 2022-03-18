#include<stdio.h>
void merge(int[],int, int , int);
void mergeSort(int[],int,int);

int main(){
    int n, a[100];
    printf("Enter the size of array \n");
    scanf("%d", &n);
    int l = 0;
    int r = n-1;
    printf("Enter the unsorted array \n");
    for(int i = 0; i<n; i++){
    scanf("%d", &a[i]);
    }
    printf("The unsorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
     printf("\n");
        mergeSort(a,l,r);
   printf("The sorted array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
return 0;
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid+1,r);
    }

}

void merge(int a[], int l, int m, int r)
{
    int b[10];
    int x = l;
    int y = m;
    int k = l;
    while(x<m && y<=r){
        if(a[x] < a[y]){
            b[k] = a[x];
            x++;
            k++;
        }
        else{
            b[k] = a[y];
            y++;
            k++;

        }
    }
    while(x<m){
         b[k] = a[x];
            x++;
            k++;
    }
        while(y<=r){
         b[k] = a[y];
            y++;
            k++;
    }
    for(int i=0; i<=r;i++){
        a[i] = b[i];
    }

}
