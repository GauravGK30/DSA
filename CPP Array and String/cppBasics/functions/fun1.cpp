#include <iostream>
using namespace std;


// void printName(){
//     cout<<"hello cpp"<<endl;
// }


// void printName2(string name){
//     cout<<name<<endl;
// }

int sum(int n1,int n2){
    int sum1=n1+n2;
    return sum1;
}
int main(){
    // cout<<"hello world"<<endl;
    // string name;
    // cin>>name;

    // printName();
    // printName2(name);

    int n1,n2;
    cin>>n1>>n2;
    int res = sum(n1,n2);
    cout<<"result "<<res;
    return 0;
}

//functions are used to use same code multiple times
// used to modularized code,increase readability
//void
//return
//parameterised
//non parameterised