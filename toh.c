#include<stdio.h>

void TOH(int n, char, char, char);

int main(){
    TOH(4,'A','B','C');

return 0;
}

void TOH(int n, char A, char B, char C){
if(n>0){
    TOH(n-1,A,C,B);
    printf("Move %d from %c to %c \n",n, A,B);
    TOH(n-1,C,B,A);
}
}
