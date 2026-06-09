#include<stdio.h>
struct Demo{
int a;
int b;
int c;
char ch;
float f;
};
int main(){
    struct Demo mannu;
    mannu.a =20;
    mannu.b=22;
    mannu.c = mannu.a + mannu.b;
    printf("\n Sum of value =%d ", mannu.c);
    return 0;
}
