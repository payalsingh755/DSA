#include<stdio.h>
int amt=5000;

int checkpin(){
    int pin = 1234;
    int pin1;
    printf("\n Please Enter your Pin Number : ");
    scanf("%d",&pin1);
        if(pin1 == pin){
            fun();
    }
    else{
        printf("\n Please Enter The COrrect Pin ! Try Again");
    }
}
void amtcheck(){
        printf("\n Please Check you Amaunt is : %d",amt);
        fun();
}
void creditamt(){
    int c;
printf("\nPlease credit your Amaunt is :");
            scanf("%d",&c);
            amt=amt+c;
            printf("\n Now your Balance=%d",amt);
            fun();
}
void debitamt(){
  
    int d;
     printf("\n Please debit your Amount is : ");
            scanf("%d",&d);
            if(d<=amt){
            amt=amt-d;
            printf("\n Please Check you Amaunt is : %d ",amt);
            fun();
}
else{
            printf("\n Now your balance :");
            fun();
        }
    }
        void mannu(){
            printf("\n\n Now end the programmmmm.........\n\n\n");
        }

void fun(){
    int no;

        printf("\n Welcome \n Please choose The any one case");
        printf("\n 1 For Balance CHeck");
        printf("\n 2 for Credit amt"); //amount dalna
        printf("\n 3 for Debit amt\n"); //amt nikalna
        printf("\n4 For Exit");

        printf("\nPlease choose The option");
        scanf("%d",&no);
        switch (no){
        case 1:{
            amtcheck();
            break;
        }
        case 2:{
            creditamt();
            break;
        }
        case 3:{
           debitamt();
           break;
        }
        case 4:{
           mannu();
           break;
        }
             
    
        default:
        {
            printf("\n Please choose a correct option");
        break;
        }
    }
}
int main(){
    checkpin();
}
