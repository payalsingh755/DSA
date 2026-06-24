// #include<stdio.h>
// int main(){

//     int arr[3][3] = { {3,6,8}, {3,8,6}, {9,5,3} };


//     // printf("%d", arr[0][1]);

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d  ",  arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }








// #include<stdio.h>
// int main(){

//     int arr[3][3];

//      for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("Enter Array Value :  ");
//             scanf("%d", &arr[i][j]);
//         }
//         printf("\n");
//     }



//     printf("\n\nNow Your Array is \n\n ");

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d  ",  arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }








#include<stdio.h>
int main(){

    int arr[30][30];
    int r,c;

    printf("\n\nPlease Enter How Much Row You Want : ");
    scanf("%d", &r);
    printf("\n\nPlease Enter How Much Col You Want : ");
    scanf("%d", &c);
    
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter Array Value :  ");
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }



    printf("\n\nNow Your Array is \n\n ");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",  arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}