#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}


int main(){
    // int arr[5]={3,8,7,5,2};
    int arr[10]={1,1,3,4,5,6,7,8,9,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<isSorted(arr,n);
}