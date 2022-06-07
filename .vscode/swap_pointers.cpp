#include<iostream>
using namespace std;

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
int main(){
    int a=4, b=2;
    int *aptr,*bptr;
    aptr=&a;
    bptr=&b;
    swap(aptr,bptr);
    
    // swap(&a,&b);
    cout<<a<<" "<<b;

    return 0;
}