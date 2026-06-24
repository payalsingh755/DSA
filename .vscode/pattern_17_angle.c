#include<stdio.h>
int main(){
    for(int i=5; i>=1; i--){
        for(int j=1; j<=5; j++){
            if(j>=i){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=2; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j>=i){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}