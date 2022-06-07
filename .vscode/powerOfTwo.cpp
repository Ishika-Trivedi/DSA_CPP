#include<iostream>
using namespace std;

int isPowerof2(int n){
    return (n && !(n & (n-1)));
}
int main(){
    int num;
    cin>>num;
    cout<<isPowerof2(num);
    return 0;
}

// isPowerof2(int num){
//     if(n==2){
//         return 0;
//       }
//     else{
//         return !(n & (n-1));
//     }
// }