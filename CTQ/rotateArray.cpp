#include<iostream>
using namespace std;

// int reverseNum(int n){
//     int rev = 0;
//     while(n>0){
//         rev = rev*10+(n%10);
//         n= n/10;
//     }
//     return rev;
// }

void reverseNum(int* start, int* end) {
    end--;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


void leftRotateByD_place(int arr[],int n,int d){
    d= d % n;
    reverseNum(arr, arr+d);
    reverseNum(arr+d , arr+n);
    reverseNum(arr, arr+n);
    //TC => O(2n)  //SC =>O(1);

}

int main(){
    int arr[5]= {1,2,3,4,5};
    int d =2;

    int n = sizeof(arr) / sizeof(arr[0]); 

    leftRotateByD_place(arr,n,d);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}