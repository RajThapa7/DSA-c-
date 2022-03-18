
#include<stdio.h>
void search(int[],int, int);

int main(){
    int key;
    int n, a[100];
    printf("Enter the size of array \n");
    scanf("%d", &n);
    int l = 0;
    int r = n-1;
    printf("Enter the array \n");
    for(int i = 0; i<n; i++){
    scanf("%d", &a[i]);
    }
    printf("The array is \n");
     for(int i = 0; i<n; i++){
    printf("%d \t",a[i]);
     }
     printf("\n");
      printf("enter the element to be searched \n");
      scanf("%d", &key);
      search(a,n,key);
      return 0;

     }

     void search(int a[], int n, int key){
         int i =0;
         int flag =0;
         for(int i = 0; i<n; i++){
            if(a[i]==key){
                printf("%d is in %d location",key,i+1);
                flag = 1;
                break;
            }

         }
          if(flag == 0){
                printf("Unsuccessfull search \n");
            }

     }
