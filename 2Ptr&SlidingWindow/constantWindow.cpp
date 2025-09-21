#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void constantWindow(vector<int>& v,int k){
    int n =v.size();
    if (k > n) {
        cout << "Window size larger than array size.";
        return;
    }

    
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += v[i];
    }
    int maxsum =sum;
    int l=0;
    int r = k-1;
    while(r < n-1){
        sum = sum - v[l];
        l++;
        r++;
        sum = sum + v[r];

        maxsum = max(maxsum,sum);
    }

    cout<<maxsum;
}

int main(){
    vector<int > v;
    v = {9,6,3,4,3,8};
    int k;
    cin>>k;

    constantWindow(v,k);
}