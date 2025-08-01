#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// //left rotate array by 1 place
// vector<int> rotateArray(vector<int> &arr,int n){
//     int temp = arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1] = temp;
//     return arr;
// }

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int n=arr.size();
//     // rotateArray(arr,n);

//     for(int num: arr){
//         cout<<num<<" ";
//     }
//     return 0;   
// }


//left rotate array by D places //brute
// void leftrotateDarr(int arr[],int n,int d){

//     d = d % n;
//     int temp[d];

//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }

//     for(int i=d;i<n;i++){
//         arr[i-d] = arr[i];

//     }

//     for(int i=n-d; i<n;i++){
//         arr[i] = temp[i-(n-d)];
//     }
// }

//optimal
void leftrotateDarr(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;
    leftrotateDarr(arr,n,d);
    // rightrotateDarr(arr,n,d);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}