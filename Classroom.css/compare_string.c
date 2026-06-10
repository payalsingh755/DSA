#include<stdio.h>
#include<string.h>
int main(){
    char ch[20] = "Payal";
    char ch1[20];

    printf("Enter your Name : ");
    scanf("%s",&ch1);
    printf("Your Name : %s \n",ch1);

    if(strcmp(ch,ch1)==0){
        printf("Name is same");
    }
    else{
        printf("Name is Not same");
    }
return 0;
}
