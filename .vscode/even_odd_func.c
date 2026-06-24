#include<stdio.h>
int ceo(int n){
    if( n %2==0)
    printf("This is even number = %d",n);
    else
    printf("This your odd Number = %d ",n);
}
int main(){
    int n;

    printf("Enter Your Number  : ");
    scanf("%d",&n);

    ceo(n);
}