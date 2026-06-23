#include<stdio.h>
int fact(int n){
    int i= 1,f = 1;
    for(i=1; i<=n; i++){
   
   f=f*i;
    }
    return f;
}

int main(){
   int n;
   
   printf("Enter Fectirial number : ");
   scanf("%d",&n);
   
printf("fact\n%d =%d",n,fact(n));
return 0;
}
