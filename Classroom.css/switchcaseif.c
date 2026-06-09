#include<stdio.h>
int main(){
    int no;
    printf("1 For Case One\n");
    printf("2 For Case Two\n");
    printf("3 For Case Three\n");
    printf("4 For Case Four\n");
    printf("\n\nPlease Choose Any One Case \n");
    scanf("%d", &no);
    switch(no){
        case 1:{
            printf("This is Case One\n");
            break;
        }
        case 2:{
            printf("This is Case Two\n");
            break;
        }
        case 3:{
            printf("This is Case Three\n");
            break;
        }
        case 4:{
            printf("This is Case Four\n");
            break;
        }
        default :{
            printf("Pleasee Choose A Correct Case");
        }
        
    }
    return 0;
}