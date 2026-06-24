#include<stdio.h>
int even(int n){
    int s=0;
    for(int i=1; i<=n; i++){
    if(i % 2 ==0){
        printf("%d + ",i);
         s+=i;
        
    }
    
}
printf("sum = %d", s);
return s;
}
int main(){
    int e;
    printf("Enter Your even number : ");
    scanf("%d",&e);

    even(e);
    return 0;
}