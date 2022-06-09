#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void display(){
        cout<<"name "<<name<<endl;
        cout<<"age "<<age<<endl;
        cout<<"gender "<<gender<<endl;
    }
      
};

int main(){
    student s[5];
    for(int i=0;i<5;i++){
         cout<<"enter student"<<i+1<<" detail"<<endl;
         cin>>s[i].name;
         cin>>s[i].age;
         cin>>s[i].gender;
    }
    for(int i=0;i<5;i++){
          s[i].display();
    }
  
    
    return 0;
}