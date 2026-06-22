#include<stdio.h>


enum Demo{
    a=10,b,c,d=30,e,f
};

int main(){
     
     printf("\n\n\nInt = %d", a);
     printf("\nInt = %d", b);
     printf("\nInt = %d",c);
     printf("\nInt = %d", d);
     printf("\nInt = %d", e);
     printf("\nInt = %d", f);
     
     
     return 0;
}