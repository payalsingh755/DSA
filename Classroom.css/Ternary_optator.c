#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter of A value : ");
    scanf("%d",&a);
    printf("Enter of B value : ");
    scanf("%d",b);

    c = (a>b) ? 1 : 2;
    if(c==1){
        printf("\n A is Big ");

    }
    else{
        printf("\n B is big");
    }
    return 0;
}

/* THIS IS 2ND OPTION MEAR TYPE:
 ternory oprater
(a>b) ? printf("A id big ") : printf("B is Big");

if(a>b){
 printf("\n A is Big ");
}
 else{
        printf("\n B is big");
    }
*/