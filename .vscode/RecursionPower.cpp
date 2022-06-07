#include<iostream>
using namespace std;

int recPow(int n, int p){
    if(p != 0){
    int prevPow = recPow(n,(p-1));
    return n*prevPow;
}
else
return 1;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<recPow(n,p);
    return 0;
}