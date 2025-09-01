#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int>Union(int a[],int b[],int n1,int n2){
    int i=0,j=0;
    vector<int >unionArr;

    while(i<n1 && j<n2){
        if(a[i]<= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[i]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i])
        {
                unionArr.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j])
        {
                unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

vector<int >intersectsort(int a[],int b[],int n1,int n2)
{
    int i=0,j=0;
    vector<int >intersectArr;

    while(i<n1 && j<n2){
        if(a[i]<b[j])
        {
            i++;
        }
        else if (b[j]<a[i])
        {
            j++;
        }
        else
        {
            intersectArr.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersectArr;
}

int main(){
    int arr1[6]={1,1,2,3,4,5};
    int arr2[5]={3,4,5,6,7};

    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);

    vector<int> result1 = Union(arr1, arr2, n1, n2);

    cout << "union of arrays: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;


    vector<int> result2 = intersectsort(arr1, arr2, n1, n2);

    cout << "intersect of arrays: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

}