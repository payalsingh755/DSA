#include<stdio.h>
int main(){
    int mannu[50]={10,20,30,40,40};

    int sum;

    printf("%d\t %d\t %d\t %d\t %d\t",mannu[0],mannu[1],mannu[2],mannu[3],mannu[4]);
    sum = mannu[0] + mannu[1] + mannu[2] + mannu[3] + mannu[4];
    printf("\n\n Sum of array = %d",sum);
    return 0;
}