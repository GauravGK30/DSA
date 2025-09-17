#include<iostream>
using namespace std;

//print 1 to n and n to 1

void print(int n){
    if(n==0){
        return ;
    }
    print(n-1);
    cout<<n<<" ";
}

void print2(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";

    print(n-1);
}
// void print(int n){
//     if(n==0){  //base con
//         return;
//     }

//     // cout<<n<<" ";//n to 1
    
//     print(n-1);
//     cout<<n<<" ";   //induction //1 to n
// }
int main(){
    print(7);
    cout<<endl;
    print2(5);
}