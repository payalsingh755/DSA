#include<stdio.h>
#include<string.h>
int main(){
    char ch[20] = "Manya";
    char ch1[20] = "Manyal";
    printf("Name One : %s\n ",ch);
    printf("Name Two : %s\n ",ch1);
    printf("%d",strcmp(ch,ch1));
    return 0;
}
