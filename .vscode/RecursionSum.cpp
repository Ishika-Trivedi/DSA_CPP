#include<iostream>
using namespace std;

int recSum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = recSum(n-1);
    return n+prevSum;
}
int main(){
    int n;
    cin>>n;
    cout<<recSum(n);
    return 0;
}