#include<stdio.h>
int main(){
    int no;
    printf("Enter Table number : ");
    scanf("%d",&no);
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",no, i ,i*no);
    }
    return 0;
}