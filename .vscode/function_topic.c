#include<stdio.h>

int fun(int no){
    // printf("\nHello User Function \n");
    int p = no + no;
    return p;

}

int main(){
   // int x = fun(10);
    printf("\nMain Function %d %d %d\n", fun(10), fun(100), fun(1000));
    return 0;
}
