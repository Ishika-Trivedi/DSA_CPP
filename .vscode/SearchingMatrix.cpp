#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    bool result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int temp;
    cin>>temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(temp==arr[i][j]){
               cout<<"element found at the index "<<i<<" "<<j<<endl;
               result=1;
            }
        }
    }
    if(result==0){
        cout<<"not found";
    }
    return 0;
}