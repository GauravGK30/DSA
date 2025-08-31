#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateLeftOne(int arr[],int n){
    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp; 
    //optimal soln
    //TC = O(n);
}

// void leftRotateByD_place(int arr[],int n,int d){
//     d= d%n;
//     int temp[d];
//     for(int i = 0; i<d ;i++){
//         temp[i] = arr[i];
//     }

//     for(int i=d;i<n;i++){
//         arr[i-d] = arr[i];
//     }

//     for(int i = n-d;i<n;i++){
//         arr[i] = temp[i-(n-d)];
//     }

// }
void leftRotateByD_place(int arr[],int n,int d){
    d= d % n;
    reverse(arr, arr+d);
    reverse(arr+d , arr+n);
    reverse(arr, arr+n);
    //TC => O(2n)  //SC =>O(1);

}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    
    int d;
    cin>>d;

    int n= sizeof(arr)/sizeof(arr[0]);
    // rotateLeftOne(arr,n);
    leftRotateByD_place(arr,n,d);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}