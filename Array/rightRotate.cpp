#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rightRotateByD_Place(int arr[],int n,int d){
    d = d % n;
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+(n-d));
    reverse(arr,arr+n);
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    
    int d;
    cin>>d;

    int n= sizeof(arr)/sizeof(arr[0]);
    // rotateLeftOne(arr,n);
    rightRotateByD_Place(arr,n,d);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}