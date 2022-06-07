#include<iostream>
using namespace std;

int firstOccurence(int a[], int n, int i, int k){
    if(i==n){
        return -1;
    }
    if(a[i]==k){
       return i;
    }
    int firOcc = firstOccurence(a,n,i+1,k);
    return firOcc;
}

int lastOccurence(int a[], int n, int i, int k){
    int lasOcc = lastOccurence(a,n,i+1,k);
    if(lasOcc != -1){
        return lasOcc;
    }
    if(a[i]==k){
        return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    cin>>i;
    int key;
    cin>>key;
    cout<<firstOccurence(arr,n,i,key)<<endl;
    cout<<lastOccurence(arr,n,i,key);
    return 0;
}