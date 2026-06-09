#include<stdio.h>
int main(){
    int coffee;
    int tea;
    int pizza;
    int momos;
    int item;
    int bill;
    printf("One For Coffee \n");
    printf("Two For tea\n");
    printf("Three For pizza\n");
    printf("Four For momos\n");
    printf("\n\nPlease Choose Any One Case : ");
    scanf("%d", &item);
    switch(item){
        case 1:{
            printf("\nHow much do you want Coffee : ");
            scanf("%d",&coffee);
            bill=coffee*15;
            printf("\nTotal bill is Coffee = %d",bill);
            break;
        }
        case 2:{
            printf("\nHow much do you want tea : ");
            scanf("%d",&tea);
            bill=tea*10;
            printf("\nTotal bill is Tea = %d",bill);
            break;
        }
        case 3:{
            printf("\nHow much do you want Pizza : ");
            scanf("%d",&pizza);
            bill=pizza*80;
            printf("\nTotal bill is Pizza = %d",bill);
            break;
        }
        case 4:{
            printf("\nHow much do you want Momos : ");
            scanf("%d",&momos);
            bill=momos*70;
            printf("\nTotal bill is Momos = %d",bill);
            break;
        }
        default :{
            printf("Pleasee Choose A Correct Case");
        }
        
    }
    return 0;
}
