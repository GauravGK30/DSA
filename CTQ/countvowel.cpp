#include<iostream>
using namespace std;
int main(){
    string str = "abcdefghijklmnopqrstuvwxyz";
    int vowel =0;
    int consonent = 0;

    for(int i=0; i < str.length();i++){
        char ch = str[i];
        if(ch=='a'|| ch=='e' || ch =='i' || ch=='o' || ch=='u'){
            vowel++;
        }else{
            consonent++;
        }
    }
    cout<<vowel<<endl;
    cout<<consonent<<endl;
    return 0;
}