#include<stdio.h>
#include<string.h>
int main(){
    char ch[20] = "a ";
    char ch1[20] = "e";
    char ch2[20] = "i";
    char ch3[20] = "o";
    char ch4[20] = "u";
    
    int len1=strlen(ch);
    int len2=strlen(ch1);
    int len3=strlen(ch2);
    int len4=strlen(ch3);
    int len5=strlen(ch4);
    
    
    printf("vowel One : %d\n ",len1);
    printf("vowel Two : %d\n ",len2);
    printf("vowel One : %d\n ",len3);
    printf("vowel Two : %d\n ",len4);
    printf("vowel One : %d\n ",len5);
   
    printf("sum of vowel number = %d",len1+len2+len3+len4+len5);
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char vowel[20]="aeiou";
//     printf("Total vowel=%d",strlen(vowel));
//     return 0;
// }