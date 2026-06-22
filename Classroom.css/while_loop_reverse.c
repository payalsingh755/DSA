#include<stdio.h>
int main(){
    int no = 123456789;
    int reverse;
    while(no!=0){
        reverse = no % 10;
        printf("%d",reverse);
        no = no / 10;
    }
    return 0 ;
}

// while loop
// for loop
//do - while loop

//start
//condition
//increment/ decrement

//1 - 10 ==++
//10 - 1 == --
