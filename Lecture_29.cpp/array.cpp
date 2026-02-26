#include<iostream>
#include<vector>
using namespace std;
int main(){
   
   int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(m,vector<int>(n));
    
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
      cin>>arr[i][j];
   }
  }
    
      for(int j=0;j<n;j++){
        if(j%2!=0){
          for(int i=n-1;i>0;i--){
      cout<<arr[i][j]<<" ";
        cout<<endl;
    }
  }
  else{
    for(int i=0;i<n;i++){
      cout<<arr[i][j]<<" ";
  }
}
      }
   return 0;
}