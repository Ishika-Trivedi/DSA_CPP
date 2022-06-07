#include<iostream>
using namespace std;

int recFact(int n){
    if(n!=0){
        int prevFact = recFact(n-1);
        return n*prevFact;
    }
    else
    return 1;
}

int main(){
    int n;
    cin>>n;
    cout<<recFact(n);
    return 0;
}