#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void longestLen(int arr[], int n,int k){
    int l=0,r=0, maxlen =0;
    int sum = 0;
    while(r<n){
        sum = sum + arr[r];
        if(sum>k){       //optimal TC O(n)
            sum = sum - arr[l];
            l++;
        }
        // while(sum>k){         //for subarray
        //     sum = sum - arr[l];
        //     l++;
        // }
        
        if(sum <= k){
            maxlen = max(maxlen,r-l+1);
            r++;
        }

    } 
    cout<<maxlen;
}


int main(){
    int arr[5]={2,5,1,7,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    cin>>k;
    longestLen(arr,n,k);
}