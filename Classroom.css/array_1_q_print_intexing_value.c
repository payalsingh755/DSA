#include<stdio.h>
int main(){
    int arr[5];

    printf("Enter Your Array Elements : \n\n");

   for(int i=0; i<5; i++){
        printf("Enter Array Value :  ");
        scanf("%d", &arr[i]);
    }

    printf("\n\nArray Is :\n\n");


    for(int i=0; i<5; i++){
        printf("%d\n",  arr[i]);
    }
}