
     //ye code galt h, mana ki sir ne krwaya hai, an nhi hai 

#include<iostream>
#include<vector>
using namespace std;

    void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();

    //transpose
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //row inverse
    int k;
    for(int i=0;i<n;i++){
        int j=0;k=m-1;
        while(j<k){
            swap(matrix[i][j],matrix[i][j]);
            j++;
            k--;
         }
    }
   
}

int main(){
    vector<vector<int>> matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotate(matrix);
    for (auto row:matrix){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//74 H.W 
// 48
//118
 //9 march ko leetcode github check karenge 
 //or 20 march ko cohort ki exam hai + viva bhi hai