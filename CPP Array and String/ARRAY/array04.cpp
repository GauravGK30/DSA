#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//searching
// int main(){
//     int n;
//     cin>>n;
//     bool found =false;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int num;
//     cin>>num;
//     for(int i=0;i<n;i++){
//         if(num==a[i]){
//             cout<<"element found at index "<<i;
//             found=true;
//         }
//     }
//     if(!found){
//         cout<<"element not found";
//     }
//     return 0;
// }

// union and intersection of 2 sorted array
// 2pointer approch

vector<int>sortedArr(vector<int> a,vector<int> b){

    int n1=a.size();
    int n2=b.size();

    int j=0;
    int i=0;

    vector<int >unionArr;
    while( i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }else{
            if(unionArr.size()==0 || unionArr.back() != b[i]){
                unionArr.push_back(b[i]);
            }
            j++;
        }
    }

    while(j<n2){
            if(unionArr.size()==0 || unionArr.back() != b[i]){
                unionArr.push_back(b[i]);
            }
            j++;        
    }

    while(i<n1){
        if(unionArr.size()==0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}

int main(){
    vector<int>a={1,1,2,3,4,5};
    vector<int>b={2,3,4,4,5,6};

    vector<int> result = sortedArr(a, b);
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

}