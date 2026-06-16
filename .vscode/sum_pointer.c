#include<stdio.h>
int main(){
    int a,b,c;
    int *p,*o,*y;
    
    p=&a;
    o=&b;
    y=&c;

    printf("Enter of value A : ");
    scanf("%d",p);
    printf("Enter of value B : ");
    scanf("%d",o);
    // c = a + b;
    *y = *p + *o;
    printf("\n\nSum of value A and B = %d",*y);
    
    printf("\n A : %d",a);
    printf("\n B : %d",b);
    printf("\n C : %d\n\n",c);

    printf("\n*p = a : %d",*p);
    printf("\n*o = b : %d",*o);
    printf("\n*y = c : %d",*y);

    return 0;
}
