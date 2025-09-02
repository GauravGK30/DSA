
#include <iostream>
using namespace std;

string reverseStr( string s){
    int start = 0;
    int end = s.length()-1;

    while(start<end){

        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
    return s;
}

int main(){
    string str;
    cin>>str;

    cout<<"\n reverse "<<reverseStr(str);
}