#include <iostream>
#include<math.h>
using namespace std;


//pass by value
// void fun(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// void fun2(string s){
//     s[0]='g';
//     cout<<s<<endl;
// }


//pass by reference
void fun3(string &s){
    s[0]='g';
    cout<<s<<endl;
}


int main(){
    // int n1,n2;
    // cin>>n1>>n2;

    // int minimum = min(n1,n2);
    // cout<<minimum<<endl;
    // cout<<max(n1,n2)<<endl;

    // int n1;
    // cin>>n1;
    // // cout<<n1<<endl;
    // fun(n1);
    // cout<<n1<<endl;
    // return 0;

    string s="saurav";
    //by value s
    // fun2(s);   //gaurav
    // cout<<s<<endl;  //saurav

    //pass by reference &s
    fun3(s);   //gaurav
    cout<<s<<endl;  //gaurav

}

//pass by reference
//pass by value