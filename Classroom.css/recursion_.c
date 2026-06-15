#include<stdio.h>

void fun(int n){
    printf(" %d\n",n);
    if(n<10){
    ++n;
    fun(n);
}
}

int main(){
     printf("Hello Main function\n");
    fun(1);

    return 0;
}