#include<bits/stdc++.h>
using namespace std;

int subArraySum(vector<int> &arr,int k){
    int n=arr.size();
    int count = 0;
    vector<int> prefixSum(n,0);

    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]= prefixSum[i-1] + arr[i];

    }

    for(int j=0;j<n;j++){
        
    }
};

int main(){

    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}