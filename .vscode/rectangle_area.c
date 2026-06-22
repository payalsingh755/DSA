#include<stdio.h>
    
int areaRectangle(int length, int width) {
    return length * width;
}   
    
int main() {
    int length, width;
    
    printf("Enter length : ");
    scanf("%d", &length);

    printf("Enter  width : ");
    scanf("%d", &width);
    
    printf("Area of Rectangle %d * %d = %d", length, width, areaRectangle(length, width));
    
    return 0;
}