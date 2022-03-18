
#include<stdio.h>
int search(int[],int, int,int);

int main(){
    int key;
    int n, a[100];
    printf("Enter the size of array \n");
    scanf("%d", &n);
    int l = 0;
    int r = n-1;
    printf("Enter the sorted array \n");
    for(int i = 0; i<n; i++){
    scanf("%d", &a[i]);
    }
    printf("The array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
     printf("\n");
      printf("Enter the element to be searched \n");
      scanf("%d", &key);
      int flag = search(a,l,r,key);
                    if(flag == 0){
                        printf("Unsuccessfull search \n");
                    }
      return 0;

     }

     int search(int a[], int l, int r, int key){
     int m = (l+r)/2;
     int flag = 0;
     if(l<=r){
        if(a[m] == key){
                flag = 1;
            printf("%d is in %d position \n",key, m+1);
        }
        else if(a[m]>key){
            search(a,l,m-1,key);
        }
        else{
            search(a,m+1,r,key);
        }
     }
return flag;
     }
