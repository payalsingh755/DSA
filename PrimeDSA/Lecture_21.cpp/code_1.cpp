#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int star=0;star<n-i;star++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}