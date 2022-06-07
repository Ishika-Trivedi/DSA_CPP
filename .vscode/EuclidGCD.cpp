#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int z;
    while(x%y != 0){
        z=x%y;
        x=y;
        y=z;
    }
    cout<<z;
    return 0;
}

//  while(y!=0){
//    int rem=a%b;
//    a=b;
//    b=rem;
//    cout<<a;
// }