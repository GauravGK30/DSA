#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j] != arr[i] ){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    // int arr[5]={3,8,7,5,2};
    // int arr[10]={1,1,3,4,4,6,7,8,9,9};
    int arr[8]={1,1,2,2,2,3,3,3};

    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<" unique ele =>" <<removeDuplicate(arr,n);
}