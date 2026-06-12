#include<stdio.h>
struct Demo{
    int a;
    int b;
    int c;
    char ch;
    float f;
};
int main(){
    struct Demo pihu;
    printf("\n Enter of value A : ");
    scanf("%d",&pihu.a);
    printf("\n Enter of value B : ");
    scanf("%d",&pihu.b);
    printf("\n Enter of Character value : ");
    scanf("\n%c",&pihu.ch); 
    scanf("%c",&pihu.ch);  //use \n becouse need for space ,in struct character. with out \n not work from run code .
    printf("\n Enter of Float value : ");
    scanf("%f",&pihu.f);
    pihu.c = pihu.a + pihu.b;
    printf("\n\n %d + %d = %d",pihu.a,pihu.b, pihu.c );
    printf("\n character = %c",pihu.ch);
 printf("\n float = %f",pihu.f);
 return 0;
}