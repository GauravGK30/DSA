#include<iostream>
#include<stack>

using namespace std;
//lifo

//push,emplace
//top
//pop
//size,empty
//swap
int main(){

    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    
    // cout<<endl;
    cout<<s.size()<<endl;
    stack<int> s2;
    s2.swap(s);
    cout<<s.size();
    cout<<s2.size();

    // cout<<s.top();
    // s.pop();
    // cout<<s.top();

}