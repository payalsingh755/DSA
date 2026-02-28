#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //flag or monitorr
    bool ans=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            ans =false;
            break;
        }
    }
    if(!ans){
        cout<<"this is prime not number";
    }
    else{
        cout<<"this is prime number";
    }
    return 0;
}