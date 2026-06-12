#include<stdio.h>
void fun(int a, int b){      //Second function
                //function with parameter and function without return type
    int c;
    c=a+b;
    printf("\nSum of A and B = %d\n", c);
}
int main(){
  int x,y;
  printf("\n main funtion\n");
  printf("User Define Function.......\n");
   printf("Enter the Value of X : ");
    scanf("%d",&x);
    printf("Enter the Value of Y : ");
    scanf("%d",&y);
    fun(x,y);  //argument function
    return 0;
}