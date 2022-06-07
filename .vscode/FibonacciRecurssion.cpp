#include<iostream>
using namespace std;

int RecFib(int n){
    if(n==0 || n==1){
        return n;
    }
    return RecFib(n-1)+RecFib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<RecFib(n);
    return 0;
}