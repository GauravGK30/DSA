#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int largest=arr[0];    
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int smallest(int arr[],int n){
    int smallest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int secondLargest(int arr[],int n){
    int largest = arr[0];
    int secondLarge = INT_MIN;

    for(int i =1;i<n;i++){
        if(arr[i]>largest){
            secondLarge = largest; 
            largest = arr[i];
        }else if (arr[i]< largest && arr[i]> secondLarge )
        {
            secondLarge =arr[i];           
        }
    }
    return secondLarge;
}
int secondSmallest(int arr[],int n){
    int smallest = arr[0];
    int secondSmall = INT_MAX ;

    for(int i =1;i<n;i++){

        if(arr[i]<smallest){
            secondSmall = smallest; 
            smallest = arr[i];
        }
        else if (arr[i]> smallest && arr[i] < secondSmall )
        {
            secondSmall =arr[i];           
        }
    }
    return secondSmall;
}

int main(){
    int arr[5]={3,8,7,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"\nlargest :"<<largest(arr,n);
    cout<<"\nsmallest :"<<smallest(arr,n);
    cout<<"\n second large"<<secondLargest(arr,n);
    cout<<"\n second small"<<secondSmallest(arr,n);
}