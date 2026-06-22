#include<stdio.h>
int big(int x,int y){
  if(x>y)
return x;
else
return y;
}
int main(){
    int a, b;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Enter any number : ");
    scanf("%d",&b); 

    printf("This is your Big Number is = %d ",big(a,b));

return 0;
}
