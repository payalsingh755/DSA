#include<stdio.h>
int main(){
    int arr[500];
    int n;
    int sum = 0;
    int mini = 0;

    printf("\n\nEnter How Much Array Elements You Want  : ");
    scanf("%d", &n);

   for(int i=0; i<n; i++){
        printf("Enter Array Value :  ");
        scanf("%d", &arr[i]);
    }

    printf("\n\nArray Is :\n\n");


    for(int i=0; i<n; i++){
        printf("%d\n",  arr[i]);
        sum = sum + arr[i];
    }

    printf("\n\n\n\nTotal Sum = %d\n\n\n", sum);

    mini = arr[0];

    for(int i=0; i<n; i++){
        if(mini > arr[i]){
            mini = arr[i];
        }
    }

    printf("\n\nMinimum Element is : %d\n\n", mini);
}