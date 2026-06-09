#include<stdio.h>
int main(){
    int mounth, admission,roomrant,fee,faculty,electricity,per;
    int fs=30000;
    int elec=20000;
    int total;
     printf("Enter you Mounth  : ");
     scanf("%d",&mounth);

     printf("Enter  your Admitiossion number : ");
     scanf("%d",&admission);
      
    printf("Enter your room mat :");
    scanf("%d", &roomrant);

      fee=admission*10000;
        printf("\n\nwe now that fee = %d",fee);

      faculty=fee-fs;
        printf("\n\nwe now that faculty sellary = %d",faculty);
       
     electricity=faculty-elec;
        printf("\n\nwe now that Electricity bill = %d",electricity);
       
    
    per=electricity - roomrant;

   
    printf("\n\nper person=%d",per);

    return 1;
}