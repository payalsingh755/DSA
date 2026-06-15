#include<stdio.h>
int main(){
    int day;
    printf("Enter your day = ");
    scanf("%d",&day);

    switch(day){
        case 1:{
            printf("Monday\n");
            break;
        }
        case 2:{
            printf("Teusday\n");
            break;
        }

        case 3:{
            printf("Wednesday\n");
            break;
        }
        
        case 4:{
            printf("Thusday\n");
            break;
        }

        case 5:{
            printf("Friday\n");
            break;
        }

        case 6:{
            printf("Sturday\n");
            break;
        }

        case 7:{
            printf("Sunday\n");
            break;
        }
    }
    return 0;
}
