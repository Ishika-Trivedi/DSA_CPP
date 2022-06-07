#include<iostream>
using namespace std;

void max(int a[], int n){
    int mx=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<mx<<endl;
    for(int i=0; i<n; i++){
        if(a[i]>a[i+1]){
            a[i+1]=a[i];
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {0,-9,1,3,-4,5};
    max(arr,6);
    return 0;
}