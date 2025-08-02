#include<bits/stdc++.h>
using namespace std;


int main(){
    // char s[] ={'a','b','c','\0'};
    // char s[] = "hello";

    char s[10];
    // cin>>s;
    cin.getline(s,10);
    int len = 0;   
    for(int i=0; i < s[i]!='\0';i++){
        len++;
        cout<<s[i]<<endl;
    }
    cout<<"length "<<len<<endl;

    // for(char ch: s){
    //     cout<<ch<<" ";
    // }
    // cout<<endl;

    // cout<<"op-->"<<s<<endl;
    // cout<<s<<endl;

    cout<<strlen(s)<<endl;
    // cout<<s[0];
    // cout<<s[1];
    // cout<<s[2];

    return 0;
}