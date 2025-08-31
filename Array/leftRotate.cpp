#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateLeftOne(int arr[],int n){
    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp;
    
}
//optimal soln
//TC = O(n);
int main(){
    int arr[5]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    rotateLeftOne(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}