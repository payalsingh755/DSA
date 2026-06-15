#include<stdio.h>
int main(){
    int language_selection;
    printf("Enter your pess 1 for Hindi\n");
    printf("Enter your pess 3 for English\n");
    printf("Enter your pess 4 for Marathi\n");

    printf("Enter your Language  Selection case = ");
    scanf("%d",&language_selection);


    switch(language_selection){
        case 1:{
            printf("Select for Madhy pradesh becouse You know Hindi.\n");
            
            break;
        }
        case 2:{
           printf("Select for  China becouse You Know English.\n");
            break;
        }

        case 3:{
           printf("Select for Maharashtry becouse You Know Mrathi.\n");
            break;
        }
    }
        
    return 0;
}
