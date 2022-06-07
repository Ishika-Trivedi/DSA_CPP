// time complexity - Big(n)

#include<iostream>
using namespace std;

int maxSum(int a[], int n){
    int cursum=0,maxsum=0;
    for(int i=0;i<n;i++){
        cursum+=a[i];
        if(maxsum<cursum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSum(arr,n);
    
    return 0;
}

