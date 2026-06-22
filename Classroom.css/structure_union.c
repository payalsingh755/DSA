// #include<stdio.h>

// union Demo{
//     int a;
//     char ch;
//     float f;
//     double d;
//};
//     int main(){
//     union Demo o;
//     o.a = 123;
//     o.ch = 'A';
//     o.f = 6.7;
//     o.d = 5.5;
//     printf("\n\n\nInt = %d\n\n\n\n", o.a);
//     printf("Char = %c\n", o.ch);
//     printf("Float = %f\n", o.f);
//     printf("Double = %lf\n", o.d);
//     return 0;
// }




#include<stdio.h>
struct Demo{
    int a;
    char ch;
    float f;
    double d;
};

int main(){
     struct Demo o;
     o.a = 123;
     o.ch = 'A';
     o.f = 6.7;
     o.d = 5.5;
     printf("Int = %d\n", o.a);
     printf("Char = %c\n", o.ch);
     printf("Float = %f\n", o.f);
     printf("Double = %lf\n", o.d);
     return 0;
}