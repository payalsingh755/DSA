#include<stdio.h>
int fun(int a, int b){
    int c;
    c = a + b;
    return c;
}
int main(){
    int x,y,no;
    printf("\n Main Function\n");
    printf("\nEnter the value of X : ");
    scanf("%d",&x);
    printf("\nEnter the value of Y : ");
    scanf("%d",&y);

    no = fun(x,y);
    printf("\n Sum of X and Y = %d",no);
    return 0;
}