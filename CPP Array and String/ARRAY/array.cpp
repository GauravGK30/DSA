#include <iostream>
#include <climits>
using namespace std;
int main(){


    int marks[5]={99,100,11,23,21};
    // size-->5 elements -->99,101,11..
    // accessing array
    // cout<<marks[0];//99
    cout<<sizeof(marks)<<endl;//20
    cout<<sizeof(marks)/sizeof(int)<<endl; //5
    
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cin>>marks[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<marks[i];
    // }
    int arr[5]={1,23,12,42,-4};
    
    int smallest =INT_MAX;//plus infinity
    int biggest = INT_MIN;//minus infinity
    // for(int i=0;i<5;i++){
    //     if(arr[i]<smallest){
    //         smallest=arr[i];
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     if(arr[i]>biggest){
    //         biggest=arr[i];
    //     }
    // }

    //min-max function
    for(int i=0;i<5;i++){
        smallest = min(arr[i],smallest);
        biggest = max(arr[i],biggest);
    }
    cout<<"smallest "<<smallest<<endl;
    cout<<"biggest "<<biggest<<endl;

    return 0;
}