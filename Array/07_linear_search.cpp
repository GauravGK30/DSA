#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int num){

    for(int i=0;i<n;i++)
    {
        if(arr[i]== num){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};

    int n= sizeof(arr)/sizeof(arr[0]);

    int num;
    cin>>num;

    cout<<"index "<<LinearSearch(arr,n,num);
}