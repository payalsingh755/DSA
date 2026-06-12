#include<stdio.h>
int fun(){
    int x,y,z;
  printf("\n Fun funtion\n");
  printf("User Define Function.......\n");
   printf("Enter the Value of X : ");
    scanf("%d",&x);
    printf("Enter the Value of Y : ");
    scanf("%d",&y);
    z=x+y;
    return z;
}
int main(){
        printf("sum of two Number = %d",fun());
        return 0;
}