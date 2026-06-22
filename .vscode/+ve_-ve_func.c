#include<stdio.h>
int pnz(int p){
    if(p > 0)
    printf("This is Your Positive Number = %d",p);
    else if(p < 0)
    printf("This is Your Negative Number = %d",p);
    else
    printf("This is Your zero number. ");
    return 0;
}
int main(){
    int p;
    printf("Enter Your Number : ");
    scanf("%d",&p);

    pnz(p);
    return 0;
}