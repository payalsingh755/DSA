#include<stdio.h>
int main(){
    int arr[50000];
    int n;


    printf("\n\nEnter How Much Array Elements You Want  : ");
    scanf("%d", &n);


   for(int i=0; i<n; i++){
        printf("Enter Array Value :  ");
        scanf("%d", &arr[i]);
    }

    printf("\n\nArray Is :\n\n");

    
    for(int i=0; i<n; i++){
        printf("%d\n",  arr[i]);
    }
}