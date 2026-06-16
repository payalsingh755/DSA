#include<stdio.h>
int main(){
    int mannu[50];
    int sum;

    printf("]n Enter Array value = ");
    scanf("%d",&mannu[0]);
    printf("]n Enter Array value = ");
    scanf("%d",&mannu[1]);
    printf("]n Enter Array value = ");
    scanf("%d",&mannu[2]);
    printf("]n Enter Array value = ");
    scanf("%d",&mannu[3]);
    printf("]n Enter Array value = ");
    scanf("%d",&mannu[4]);

    printf("%d\t %d\t %d\t %d\t %d\t \n",mannu[0],mannu[1],mannu[2],mannu[3],mannu[4]);
    sum = mannu[0] + mannu[1] + mannu[2] + mannu[3] + mannu[4];
    printf("\n\n Sum of array = %d",sum);
    return 0;
}