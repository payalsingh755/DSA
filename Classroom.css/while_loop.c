#include<stdio.h>
int main(){
    int i;
    int no;
printf("Please only press One(1) : ");
scanf("%d",&i);
    printf("Enter table Number : ");
    scanf("%d",&no);

    while(i<=10){
        printf("%d * %d =%d\n",i, no, i * no);
        ++i;
    }
    return 0;
}