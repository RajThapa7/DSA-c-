#include<stdio.h>
int sum(int, int);



int main(){
printf("%d", sum(5,0));
return 0;
}
int sum(int x,int total){
if(x == 0){
    return total;
}
else{
    return sum(x-1, total+x);
}
}
