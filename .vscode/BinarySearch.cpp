#include<iostream>
using namespace std;

int binSearch(int a[], int l, int r, int num){
    int mid;

    while(l<=r){
        mid = (l+r)/2;
        if(num==a[mid]){ 
            return mid;
        }
        else if(num>a[mid]){   
            l=mid+1;
        }
        else{
            r=mid-1;
        }
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
    int num;
    cin>>num;
    cout<<binSearch(arr,0,n-1,num);

    return 0;
}