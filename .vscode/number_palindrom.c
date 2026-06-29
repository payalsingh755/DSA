#include<stdio.h>

int main(){
    int no;
    int rev=0;
    int endn=0;
    printf("Enter Any Number : ");
    scanf("%d",&no);
    endn = no % 10;


    while(no!=0){
        rev = no% 10;
        no = no /10;
    }

    if(rev == endn){
        printf("Number is Palindrom ");
    }
    else{
        printf("number id Not Palindrom");
    }
    return 0;
}