#include<iostream>

using namespace std;

int main(){

    for(int i=1; i<10;i++){
        cout<<"i = "<<i<<" ";
    }
    cout<<endl;

    for(int i=10; i>0;i--){
        cout<<"i = "<<i<<" ";
    }

      
    int a=10;
    while (a<30)
    {
        cout<<a<<" ";
        a++;
    }
    
    int a=1;
    do
    {
        // if(a==5){
        //     break;
        // }
        cout<<" value of"<<a<<endl;
        a++;
       
    } while (a<10);

    
    return 0;
}