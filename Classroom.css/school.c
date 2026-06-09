

#include <stdio.h>

int main()
{
    int num = 0;
    int age = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (num >= 60)
    {
        // printf("Available for admission\n");

        if (age >= 18)
        {
            printf("Greate You Are Allow FOr Bit :Addmission / picnic\n");
        }
        else
        {
            printf("Good You Are Not For Picnic Only We Give Admission\n");
        }
        
    }
    else
    {
        if(age<=18){
            printf("Please Go Home\n");
        }
        else{
            printf("As A Guest You Are Allow For Picnic");
        }

        
    }

    return 0;
}