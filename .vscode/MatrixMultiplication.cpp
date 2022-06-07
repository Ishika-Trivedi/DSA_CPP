#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<"First array";
    int ar1[n1][n2],ar2[n2][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>ar1[i][j];
        }
    }
    cout<<"Second array";
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>ar2[i][j];
        }
    }
    cout<<"The final multiplied matrix is"<<endl;
    int mul[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            mul[i][j]=0;
            for(int k=0;k<n2;k++){
                mul[i][j]+=ar1[i][k]*ar2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}