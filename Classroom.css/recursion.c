#include<stdio.h>
void fun(int n){
    printf("Hello fun function = %d\n",n);
    ++n;
    fun(n);
}
int main(){
    printf("Hello Main function\n");
    fun(1);
    return 0;
}