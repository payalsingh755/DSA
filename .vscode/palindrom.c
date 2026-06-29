#include<stdio.h>
#include<string.h>
int main(){    //malayalam
    char str[100];
    int i, len, isPalindrom = 1;

    printf("Enter a String : ");
    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<=len/2; i++){
        if(str[i] != str[len-i-1]){
            isPalindrom = 0;
            break;
        }
    }
    
    if(isPalindrom == 1){
    printf("The string is a Palindrom.\n");
    }
    else{
        printf("The string is a Not Palindrom.\n");
    }
    return 0;
}