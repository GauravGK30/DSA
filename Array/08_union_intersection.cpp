#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> unionSort(int arr1[],int arr2[],int n1,int n2){

    int i=0;
    int j=0;
    vector<int > unionArr;
    while(i<n1 && j< n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
//remaining array
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
    }

    while(i<n1){
        if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
    }
    return unionArr;
}

int main(){
    int arr1[6]={1,1,2,3,4,5};
    int arr2[5]={3,4,5,6,7};

    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);

    vector<int> result = unionSort(arr1, arr2, n1, n2);

    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

}