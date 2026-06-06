#include<stdio.h>
int main(){
    int tank = 20;
    int t1 = 20;
    int f1,f2,f3,f4,equal, alluse;
    int p1,p2,p3,p4;
    int m1,m2,m3 ,m4;
    equal = tank / 4;
    
    printf("\nFamily 1 Please Enter How Many Water You Use : ");
    scanf("%d", &f1);
    if(f1<=tank){
        tank = tank- f1;
        printf("\n\nNow Awailaable Water is : %d", tank);
    }
    else{
        printf("\n\nFamily 1 PLease Enter The Correct Quantity Of Water  : %d", tank);
        return 0;
    }
    printf("\nFamily 2 Please Enter How Many Water You Use : ");
    scanf("%d", &f2);
    if(f2<=tank){
        tank = tank- f2;
        printf("\n\nNow Awailaable Water is : %d", tank);
    }
    else{
        printf("\n\nFamily 2 PLease Enter The Correct Quantity Of Water  : %d", tank);
        return 0;
    }
    printf("\n\nFamily 3 Please Enter How Many Water You Use : ");
    scanf("%d", &f3);
    if(f3<=tank){
        tank = tank- f3;
        printf("\n\nNow Awailaable Water is : %d", tank);
    }
    else{
        printf("\n\nFamily 3 PLease Enter The Correct Quantity Of Water  : %d", tank);
        return 0;
    }
    
    printf("\n\nFamily 4 Please Enter How Many Water You Use : ");
    scanf("%d", &f4);
    if(f4<=tank){
        tank = tank- f4;
        printf("\n\nNow Awailaable Water is : %d", tank);
    }
    else{
        printf("\n\nFamily 4 PLease Enter The Correct Quantity Of Water  : %d", tank);
        return 0;
    }


    alluse = f1 + f2 + f3 + f4;
    
    if(alluse <= t1 ){
        if(f1 > equal){
            p1 = f1  - equal ;
            printf("\n\n\nFamily 1 You Use Extra Water : %d", p1);
            m1 = p1 * 200;
            printf("\nPanelty For Extra Water Use : %d", m1);
        }

        if(f2 > equal){
            p2 = f2  - equal ;
            printf("\n\n\nFamily 2 You Use Extra Water : %d", p2);
            m2 = p2 * 200;
            printf("\nPanelty For Extra Water Use : %d", m2);
        }

        if(f3 > equal){
            p3 = f3  - equal ;
            printf("\n\n\nFamily 3 You Use Extra Water : %d", p3);
            m3 = p3 * 200;
            printf("\nPanelty For Extra Water Use : %d", m3);
        }

        if(f4 > equal){
            p4 = f4  - equal ;
            printf("\n\n\nFamily 4 You Use Extra Water : %d", p4);
            m4 = p4 * 200;
            printf("\nPanelty For Extra Water Use : %d", m4);
        }

    }
    else{
        printf("Invalid Water use Input");
    }
    

    return 0;
}