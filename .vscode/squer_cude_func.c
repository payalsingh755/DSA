#include<stdio.h>
int squer(int n){
     return n*n;
}
   int cube(int n){
    return n*n*n;

}
int main(){
    int sc;

    printf("Enter Your number : ");
    scanf("%d",&sc);

    printf("This is Your Squer number is = %d\n",squer(sc));
        printf("This is Your Cube number is = %d",cube(sc));

    return 0;
}

