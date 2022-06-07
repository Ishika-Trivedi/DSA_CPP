#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // first method for printing
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // second method for printing
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // third method for printing
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();
     for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int> v2(3,50);
     for(auto element:v2){
        cout<<element<<" ";
    }
    cout<<endl;
    
    cout<<"Elements after swapping are"<<endl;
    swap(v,v2);

    cout<<"v1 elements are"<<endl;
     for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    cout<<"v2 elements are"<<endl;
     for(auto element:v2){
        cout<<element<<" ";
    }
    cout<<endl;

    // cout<<"Elements after sorting are"<<endl;
    // sort(v.begin(),v.end());

}