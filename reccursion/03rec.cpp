#include<bits/stdc++.h>
using namespace std;

//Sort an array

void insert(vector<int>& arr,int temp) {
    if (arr.size() == 0 || arr.back() <= temp) {
        arr.push_back(temp);
        return;
    }

    int val = arr.back();
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(val);
}


void sorted(vector<int>& arr){
    if(arr.size() <= 1){
        return ;
    }

    int temp = arr.back();
    arr.pop_back();

    sorted(arr);
    insert(arr,temp);

    
}




int main(){
    vector<int> arr={7,4,1,5,6};

    sorted(arr);
    for (int num : arr)
        cout << num << " ";
    cout << endl;

}