#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){

    string str1="gaurav ";
    string str2="gk ";

    string str3=str1+str2;
    cout<<str3<<endl;

    cout<<(str1 == str2)<<endl;
    cout<<(str1 < str2)<<endl;
    cout<<str2.length()<<endl;


    string str4;
    // cin>>str4;
    getline(cin,str4);
    cout<<str4;

    for(int i=0;i<str1.length();i++){
        cout<<str1[i]<<" ";
    }



    // Reverse a string 

    string s;
    getline(cin,s);
    reverse(s.begin() , s.end());
    cout<<s<<endl;
    return 0;
}