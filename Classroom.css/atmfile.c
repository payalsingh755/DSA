#include<stdio.h>
int main(){
    int amt=1000;
    int pin1=7987;
    int pin2,c,d,no;
    printf("\nPlease Enter your Pin Number : ");
    scanf("%d",&pin2);
    if(pin1==pin2){
        printf("\n Welcome \n Please choose The option");
        printf("\n 1 For Balance CHeck");
        printf("\n 2 for Credit amt"); //nikalana
        printf("\n 3 for Debit amt\n"); //amt dalna
        scanf("%d",&no);
        switch (no)
        {
        case 1:{
            printf("\n Please Check you Amaunt is : %d");
            break;
        }
        case 2:{
            printf("\nPlease credit your Amaunt is : %d");
            scanf("%d",&c);
            amt=amt+c;
            printf("\n Now your Balance");
            break;
        }
        case 3:{
            printf("\n Please debit your Amount is : ");
            scanf("%d",&d);
            if(d<=amt){
                amt=amt-d;
                printf("\n Please Check you Amaunt is : %d : ");
            }
            else{
            printf("\n Now your balance :");
            }
            break;
        }
    
        default:
        {
            printf("\n Please choose a correct option");
        break;
        }
    }
}
else{
    printf("\n\nPlese Enter your correct Pin");
}
return 0;
}