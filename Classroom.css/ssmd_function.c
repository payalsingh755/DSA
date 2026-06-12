#include<stdio.h>
int sum(){  //sum, substraction,multiply,division
    int a,b,c;
    printf("Please Enter Number of A : ");
    scanf("%d",&a);
    printf("Please Enter Number of B : ");
    scanf("%d",&b);
    c=a+b;
    printf("A Sum of two Number A + B =%d\n\n",c);
 
}
int sub(){
    int a,b,c;
    printf("\nPlease Enter Number of A : ");
    scanf("%d",&a);
    printf("\nPlease Enter Number of B : ");
    scanf("%d",&b);
    c=a-b;
    printf("\nA Sum of two Number A - B =%d\n\n",c);
 
}
int multiply(){
    int a,b,c;
    printf("\nPlease Enter Number of A : ");
    scanf("%d",&a);
    printf("\nPlease Enter Number of B : ");
    scanf("%d",&b);
    c=a*b;
    printf("\nA Sum of two Number A * B =%d\n\n",c);
 
}
int divide(){
    int a,b,c;
    printf("\nPlease Enter Number of A : ");
    scanf("%d",&a);
    printf("\nPlease Enter Number of B : ");
    scanf("%d",&b);
    c=a/b;
    printf("\nA Sum of two Number A / B =%d\n\n",c);
 
}
int main(){
    int no;
    printf("Your Start Function\n");
    printf("Tab 1 for Addtion\n");
    printf("Tab 2 for Substraction\n");
    printf("tab 3 For Multiplication\n");
    printf("Tab 4 for Division\n");
    scanf("%d",&no);
    switch(no){
        case 1:{
            sum();
            break;
        }
        case 2:{
            sub();
            break;
        }
        case 3:{
            multiply();
            break;
        }
        case 4:{
           divide();
            break;
        }
        default:{
        printf("please correct choose case");
    }
    
    }
    
    printf("\nYour End Funtion");
    return 0;
}