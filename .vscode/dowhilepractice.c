
#include<stdio.h>
int main(){

    int i = 1;
    int no;
    printf("Enter Table Number : ");
    scanf("%d", &no);

    do{
        printf("%d * %d = %d\n", i, no, i*no);
        ++i;
    }while(i<=10);




    // int i = 1;
    // do{
    //     printf("Hello I : %d\n", i);
    //     ++i;
    // }while(i<=10);

    return 0;
}