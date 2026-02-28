#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    //flag or monitor
    bool ans=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ans=false;
            break;
        }
    }
    if(!ans){
        cout<<"this  is not prime number";
    }
    else{
        cout<<"this is prime ";
        }
        return 0;
    }