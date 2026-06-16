#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("Value of A using A = %d\n\n",a);
    printf("Value of A using *p (pointer) = %d\n\n",*p);
    
    printf("VAddress of A using A = %d\n\n",&a);
    printf("Address of A using *p (pointer) = %d\n\n",p);
    printf("Value of P = %d\n\n",&p);

    return 0;
}

//*p = a value
//p =a Address
//&p = itself address