#include<iostream>
#include<string>

using namespace std;

int main(){
    // how to declare a string
    string str;
    cin>>str;
    cout<<str;

    string str1="ishika";
    cout<<str1;

    string str;
    getline(cin,str); //gives the output of the full statement
    cout<<str;

    string s1,s2;
    s1="fam";
    s2="ily";
    s1.append(s2); //s1+s2
    cout<<s1;
    cout<<s1+s2;

    //access the element in the string
    cout<<s1[1];

    //clear function
    string abc="afffbsggnrnrnthnth  thenen  erhrth";
    abc.clear();
    cout<<abc;

    string v = "ishikaatri";
    cout<<v.find("tri")<<endl;

    //insert
    v.insert(10,"vedi");
    cout<<v<<endl;

    //
    for(int i=0;i<v.length(); i++)
    cout<<v[i]<<" ";

    //take the string from a particular position
    string d = v.substr(4,3);
    cout<<d<<endl;

    return 0;
}


