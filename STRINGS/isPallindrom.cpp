#include<iostream>
#include<algorithm>
using namespace std;

bool isPallindrom(string str){
    int end=str.length()-1;
    int st = 0;

    while(st<end){
        while(st<end && !isalnum(str[st])){
            st++;
        }

        while(st<end && !isalnum(str[end])){
            end--;
        }
        
        if(tolower(str[st]) != tolower(str[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;

}

int main(){
    string str;
    getline(cin,str);
    if(isPallindrom(str)==1){
        cout<<"true";
    }else{
        cout<<"false";
    };
    return 0;
}