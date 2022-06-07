#include<iostream>
using namespace std;

void divisible(int n, int a, int b){
    int count=0;
    for(int i=1; i<=n; i++){
        if(i%a == 0 || i%b == 0){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    cout<<count;
}

int main(){
    int num;
    cin>>num;
    int a,b;
    cin>>a>>b;
    divisible(num,a,b);
    return 0;
}

