#include<stdio.h>
int fun(){
    printf("%d\t",0);
    printf("%d\t",0);
}
int fibo(no){
    int s = no;
    int i = 0;
    printf("%d\t",no);
    while(no<=100){
        i = s + no;
        printf("%d\t",i);
        s = no;
        no = i;
    }
}
int main(){
    fun();
    fibo(1);
    return 0;
}