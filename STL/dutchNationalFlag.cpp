#include <bits/stdc++.h>
using namespace std;

//Sort an Array of 0s, 1s, and 2s (Dutch National Flag Problem)

void sortColors( vector<int>& arr){
    int low=0;
    int mid=0;
    int high=arr.size()-1;

    while(mid <= high){
        if(arr[mid]== 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if (arr[mid]==1){
            mid++;
        }else
        {
            swap(arr[mid],arr[high]);
            high--;    
        }
    }

}

int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sortColors(arr);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}