#include<stdio.h>
#include<string.h>
int main(){
    char email[20]= "pihu@123gmail.com";
    char pass[10]= "1234";
    char email1[20];
    char pass1[10];


    
    // printf("This is your Email = %s", &email);
    // printf("This is your password = %s", &pswd);

printf("\nEnter your Email : " );
scanf("%s", &email1);
printf("\nEnter your password : ");
scanf("%s",&pass1);

//   printf(" WELCOME");

    if(strcmp(email, email1) == 0  && strcmp(pass,pass1) == 0 ){
        printf("Login Success");
    }

    if(strcmp(email, email1) != 0  && strcmp(pass,pass1) == 0 ){
        printf("Email is Not Correct");
    }
      
    if(strcmp(email, email1) == 0  && strcmp(pass,pass1) != 0 ){
        printf("Password is Not Correct");
    }

    if(strcmp(email, email1) != 0  && strcmp(pass,pass1) != 0 ){
        printf("Email & Password Both Are Incorrect");
    }
    return 0;

}