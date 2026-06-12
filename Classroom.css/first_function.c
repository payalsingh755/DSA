#include<stdio.h>
void fun(){           //first function
                //function without parameter and function without return type
    int a,b,c;
    printf("User Define Function.......\n");
    printf("Enter the Value of A : ");
    scanf("%d",&a);
    printf("Enter the Value of B : ");
    scanf("%d",&b);
    c = a + b;
    printf("\n Sum of A and B = %d\n",c);
}
int main(){
    printf("\nMain Function\n");
    fun();
    return 0;
}