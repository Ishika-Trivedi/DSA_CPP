#include<iostream>
using namespace std;

int decreaseOrder(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    
    int redecrease = decreaseOrder(n-1);
    return redecrease;
    
}

int increaseOrder(int n){
     if(n==0){
         return 0;
     }
     int reincrease = increaseOrder(n-1);

     cout<<n<<" ";
     return reincrease;
}

int main(){
    int n;
    cin>>n;
    cout<<decreaseOrder(n);
    cout<<endl;
    cout<<increaseOrder(n);
    return 0;
}