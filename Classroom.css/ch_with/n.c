#include<stdio.h>
int main(){
    char ch;
    int a,b,c;
    printf("+ for add\n");
    printf("- for sub\n");
    printf("* for mul\n");
    printf("/ for div\n");

    printf("please choose any one option : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':{
      printf("\nPlese enter number of A : ");
      scanf("%d",&a);
       printf("\nPlese enter number of B : ");
      scanf("%d",&b);
      c=a+b;
      printf("\n Sum of number = %d ",c);
       break;
    }
    case '-':{
     printf("\nPlese enter number of A : ");
      scanf("%d",&a);
       printf("\nPlese enter number of B : ");
      scanf("%d",&b);
      c=a-b;
      printf("\n Sub of number = %d ",c);
       break;
    }
    case '*':{
      printf("\nPlese enter number of A : ");
      scanf("%d",&a);
       printf("\nPlese enter number of B : ");
      scanf("%d",&b);
      c=a*b;
      printf("\n Mul of number = %d ",c);
       break;
    }
    case '/':{
      printf("\nPlese enter number of A : ");
      scanf("%d",&a);
       printf("\nPlese enter number of B : ");
      scanf("%d",&b);
      c=a/b;
      printf("\n Div of number = %d ",c);
       break;
    }
    default:{
        printf(".....oopss...... ");
    }
    return 0;
}
}