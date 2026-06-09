#include<stdio.h>
int main(){
    int no,a,b,c;
    printf("Please Enter The Value of A : ");
    scanf("%d", &a);
    printf("\n\nPlease Enter The Value of B : ");
    scanf("%d", &b);
    
    printf("\n\nPlease Choose Any One Case \n");

    printf("1 For Add + \n");
    printf("2 For Sub -\n");
    printf("3 For Mul *\n");
    printf("4 For Div /\n");
    scanf("%d", &no);
    switch(no){
        case 1:{
            printf("\nThis is Case One\n");
            c = a + b;
            printf("\n\nSum of A and B = %d\n", c);
            break;
        }
        case 2:{
            printf("This is Case Two\n");
            c = a - b;
            printf("\n\nSub of A and B = %d\n", c);
            break;
        }
        case 3:{
            printf("This is Case Three\n");
            c = a * b;
            printf("\n\nMul of A and B = %d\n", c);
            break;
        }
        case 4:{
            printf("This is Case Four\n");
            c = a / b;
            printf("\n\nDiv of A and B = %d\n", c);
            break;
        }
        default :{
            printf("Pleasee Choose A Correct Case");
        }
        
    }
    return 0;
}