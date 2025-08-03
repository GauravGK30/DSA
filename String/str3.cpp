#include<bits/stdc++.h>
#include<string>
using namespace std;

// str.find(substr) -->return starting position 
// str.erase(start,end) -->end=length

string removeOccurance(string str,string part){
    int count=0;
    while(str.length() > 0 && str.find(part) < str.length() ){
         str.erase( str.find(part),part.length());
        count++;
    }
    cout<<"count "<<count;
    return str;
};

int main(){
    string str="daabcbaabcbc";
    string part="abc";
    // cin>>str;
    string result  = removeOccurance(str,part);
    cout<<result;
}
