#include<stdio.h>

int main(){
static int i = 10;
if(i>0){
printf("My name is raj \n");
i--;
main();
}
return 0;
}
