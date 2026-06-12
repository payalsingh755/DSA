#include<stdio.h>
#include<string.h>
int main(){
    char ch[20] = "payal";
    char ch1[20] = "MANNU";
    
    printf("Name one =%s\n",strupr(ch) );//use in strlen is character is capital 
    printf("Name Two =%s\n",strlwr(ch1) );//use in strlen is character is small
    return 0;
}
