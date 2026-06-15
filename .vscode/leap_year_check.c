#include<stdio.h>
int main(){
    int year;
    printf("Enter of a year = ");
    scanf("%d",&year);

    if((year / 400 == 0 ) || (year % 4 == 0 && year % 100 != 0)){
        printf("is a contury leap year=%d \n",year);
    }
    else{
        printf("%d is a Not contury leap year\n",year);
    }
    return 0;
}