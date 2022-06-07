#include<iostream>
using namespace std;

//getBit
int getBit(int n,int pos){
    return((n & (1<<pos)) != 0);
}

//setBit
int setBit(int n1, int pos1){
    return((n1 | (1<<pos1)) != 0);
}

//clearBit
int clearBit(int n2, int pos2){
    int number = ~(1<<pos2);
    return((n2 & number));
}

//updateBit
int updateBit(int n3, int pos3, int val){
    int number = ~(1<<pos3);
    int k = (n3 & number);
    return (k | (val<<pos3));
}

int main(){
    int num, position,value;
    cin>>num>>position>>value;
    cout<<getBit(num,position)<<endl;
    cout<<setBit(num,position)<<endl;
    cout<<clearBit(num,position)<<endl;
    cout<<updateBit(num,position,value)<<endl;
    return 0;
}