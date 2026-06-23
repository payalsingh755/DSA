#include<stdio.h>
int sum(int n){
    int i =1,s=1;
 for(i=1; i<=n; i++){
    s=s+n;
 }
 return s;
}
int main(){
    int n;
    printf("Enter a N number = ");
    scanf("%d",&n);
printf("sum\n%d = %d",n,sum(n));
    return 0;
}