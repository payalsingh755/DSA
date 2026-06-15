#include<stdio.h>
int main(){
    int vehicle;
    printf("Enter your pess 2 for Two vehicle\n");
    printf("Enter your pess 3 for Three vehicle\n");
    printf("Enter your pess 4 for four vehicle\n");

    printf("Enter your vehicle case = ");
    scanf("%d",&vehicle);

    switch(vehicle){
        case 2:{
            printf("20 rupay \nParking charge for Two Vehicle.\n");
            printf("Panalty : 100");
            break;
        }
        case 3:{
            printf("50 rupay \nParking charge for Three Vehicle.\n");
             printf("Panalty : 500");
            break;
        }

        case 4:{
            printf("100 rupay \nParking charge for four Vehicle.\n");
             printf("Panalty : 1000");
            break;
        }
    }
        
    return 0;
}
