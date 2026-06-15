#include<stdio.h>
int main(){
    int recharge;
    int month;
    printf("\n\nFor 1 month recharge : \n299 \n349 \n379 \n399");
     printf("\n\nFor 3 month recharge : \n1099");
    printf("\n\nFor 12 month recharge : \n4099 \n8198");

    printf("\n\nEnter your month = ");
    scanf("%d",&month);
    printf("\n\nEnter your Recharge Plan = ");
    scanf("%d",&recharge);

   if(month==1){
    switch(recharge){
        case 299:{
            printf("congratulation succesfull your recharge for one month\n");
            printf("Validyti : 28day\n");
            printf("Data : 1GB/Day\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }
        case 349:{
            printf("congratulation succesfull your recharge for one month\n\n");
            printf("Validyti : 28day\n");
            printf("Data : 1.5GB/Day\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }

        case 399:{
            printf("congratulation succesfull your recharge for one month\n\n");
            printf("Validyti : 28day\n");
            printf("Data : Unlimited 4G & 5G data\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }
        
        case 379:{
            printf("congratulation succesfull your recharge for one month\n\n");
            printf("Validyti : 28day\n");
            printf("Data : Unlimited Data\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }
         default:
                printf("Invalid 28/30-day recharge plan.\n");
    }
}
    else if(month==3 ){
        switch(recharge){
        case 1099:{
            printf("congratulation succesfull your recharge for one month\n\n");
            printf("Validyti : 84day\n");
            printf("Data : Unlimited 4G & 5G data\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }
         default:
                printf("Invalid 84-day recharge plan.\n");
        }
    }
    else if ( month ==12){
        switch(recharge){
        case 4099:{
            printf("congratulation succesfull your recharge for one month\n\n");
            printf("Validyti : 365day\n");
            printf("Data :Unlimited\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }

        case 8198:{
            printf("congratulation succesfull your recharge for one month\n\n");
            printf("Validyti : 28day\n");
            printf("Data : 1GB/Day\n");
            printf("Call/SMS : Unlimited Call & 100 SMS\n");
            break;
        }
       
        }
   }
 else{
            printf("Invalid 365-day recharge plan.\n");
        }
    return 0;
}
