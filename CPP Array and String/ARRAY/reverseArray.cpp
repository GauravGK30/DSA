//  2 pointers Approach
// time complexity O(n)
#include <iostream>
#include <climits>
using namespace std;

void reverseArray(int arr[],int size){
    int start=0,end=size-1;
    if(size%2==0){

        while(start < end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }else{
        while(start == end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

    }   
}

int main(){

    // ODD ARRAY
    int arr1[7]={1,2,3,4,5,6,7};
    int size1 =7;
    reverseArray(arr1,size1);
    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    
    // EVEN ARRAY
    int arr2[6]={2,7,8,6,4,3};
    int size2 =6;
    reverseArray(arr2,size2);
    for(int i=0;i<size2;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
