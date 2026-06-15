#include<stdio.h>

int table(int i, int n){
    
    printf("%d * %d = %d\n",n,i, i*n);
    if(i<10){
        ++i;
        table(i,n);
    }
}
int main(){
    int n;
    printf("Enter your number = ");
    scanf("%d",&n);
    table( 1,n);
}