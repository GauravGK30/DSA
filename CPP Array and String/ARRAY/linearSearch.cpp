
//Linear search algorithm
// time complexiity=> O(n)

#include <iostream>
using namespace std;


int linearSearch(int arr[],int size,int target){

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<< target <<" found at index ";
            return i;
        }
    }
    cout<<"not found: ";
    return -1;
}

int main(){
    int arr[7]={4,2,7,8,1,2,5};
    int size =7;

    int target;
    cin>>target;

    cout<<linearSearch(arr,size,target)<<endl;
    return 0;
}