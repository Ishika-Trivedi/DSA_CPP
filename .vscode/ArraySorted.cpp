#include<iostream>
using namespace std;

bool sortedArray(int a[], int n){
    if(n==1){
        return true;
    }
        bool sorArr = sortedArray(a+1,n-1); //a+1 -- pointer of array at 1st position
        return (a[0]<a[1] && sorArr);
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortedArray(arr,n);
    return 0;
}