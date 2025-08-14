// #include <bits/stdc++.h>
// #include<stack>
// using namespace std;

// bool isValid(string s){
//     stack<char> st;

//     for(char ch: s)
//     {
//         if(ch=='(' || ch=='{' || ch=='['){
//             st.push(ch);

//         }
//         else{
//             if(st.empty()) return false;
//             char top = st.top();
//             st.pop();

//             if(
//                 (ch==')' && top!= '(')||
//                 (ch=='}' && top!= '{')||
//                 (ch==']' && top!= '[')
//             ){
//                 return false;
//             }
//         }
//     }

//     return st.empty();
// }

// int main(){
//     string s;
//     cin>>s;

//     if(isValid(s)){
//         cout<<"valid";
//     }else{

//         cout<<"Invalid";
//     }

// }

#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);

}

int main(){
    int n=10;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}