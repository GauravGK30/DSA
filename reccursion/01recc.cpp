#include<iostream>
using namespace std;

//print 1 to n and n to 1

void print(int n){
    if(n==0){  //base con
        return;
    }

    cout<<n<<" ";//n to 1

    print(n-1);
    
    cout<<n<<" ";   //induction //1 to n
}
int main(){
    print(7);
}