#include<stdio.h>
int no;
int abhi(int *a,int *b){
    int *p;
    p = &no;
    *p = *a + *b;
    printf("\n\nSum of A and B = %d\n\n", *p);
}
int main(){
    int x,y;
    printf("Enter X and Y Value : ");
    scanf("%d%d", &x , &y);
    abhi(&x,&y);  //Call By Reference
    printf("\n\nThis is mY Main Function = %d", no);
    return 0;
}













// #include<stdio.h>

// int abhi(int *a,int *b){
//     int c ;
//     c = *a + *b;
//     printf("\n\nSum of A and B = %d\n\n", c);
// }
// int main(){
//     int x,y;
//     printf("Enter X and Y Value : ");
//     scanf("%d%d", &x , &y);
//     abhi(&x,&y);  //Call By Reference
    
//     return 0;
// }



// Call By Refference 


























// #include<stdio.h>

// int abhi(int a,int b){
//     int c ;
//     c = a + b;
//     printf("\n\nSum of A and B = %d\n\n", c);
// }
// int main(){
//     int x,y;
//     printf("Enter X and Y Value : ");
//     scanf("%d%d", &x , &y);
//     abhi(x,y);
//     // abhi(10,20);  //Function Call By Value
//     return 0;
// }