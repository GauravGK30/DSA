#include<bits/stdc++.h>
#include<string>
using namespace std;


//palindrom
bool isAlphaNum(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}
bool isPalindrom(string s){
    
    int st=0;
    int end=s.size()-1;

    while (st<end)
    {
        if(!isAlphaNum( s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum( s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
            
        }
        st++;
        end--;

    }
    return true;
    
}


int main(){

    // string str1="gaurav ";
    // string str2="gk ";

    // string str3=str1+str2;
    // cout<<str3<<endl;

    // cout<<(str1 == str2)<<endl;
    // cout<<(str1 < str2)<<endl;
    // cout<<str2.length()<<endl;


    // string str4;
    // // cin>>str4;
    // getline(cin,str4);
    // cout<<str4;

    // for(int i=0;i<str1.length();i++){
    //     cout<<str1[i]<<" ";
    // }



    // Reverse a string 

    string s;
    cin>>s;
    
    if (isPalindrom(s))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;


    // reverse(s.begin() , s.end());
    // cout<<s<<endl;
    return 0;
}