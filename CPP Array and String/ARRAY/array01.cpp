
#include <iostream>
#include <climits>
using namespace std;


//largest element in array
int main(){
    int n=6;
    int arr[n]={1,2,3,8,4,2};

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest element -->"<<max;
    //optimal soln TC => O(n);
}




//second largest element in array
int main(){
    //sort and n-2 brut force TC=> O(nlogn)
    int n=6;
    int arr[n]={1,2,3,8,4,2};
    int arr[n]={8,8,8,8,8,8};
    
    // int max=arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }

    // int sec_max =-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>sec_max && arr[i]<max){
    //         sec_max = arr[i];
    //     }
    // }
    // cout<<"second largest -->"<<sec_max;
    // return 0;

    //better soln -->TC =>1st pass O(n),2nd pass O(n)
    // TC-->O(2n);

    int max=arr[0];
    int sec_max = -1;
    int min = arr[0];
    int sec_min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i]<max && arr[i]> sec_max)
        {
            sec_max = arr[i];
        }
    }//optimal O(n)

    //smallest and sec smallest
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            sec_min=min;
            min=arr[i];
        }
        else if (arr[i] != min && arr[i]<sec_min)
        {
            sec_min = arr[i];
        }
    }//O(n)

    cout<<"largest "<<max<<endl;
    cout<<"secLargest "<<sec_max<<endl;
    cout<<"smallest "<<min<<endl;
    cout<<"secSmallest "<<sec_min<<endl;

}


// check array is sorted

bool is_Sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }else{
            return false;

        }
    }
    return true;
}
int main(){
    int n=6;
    // int arr[n]={1,2,1,4,5,3};
    int arr[n]={1,2,4,5,7,8};
    if (is_Sorted(arr, n)) {
        cout << "Array is sorted.\n";
    } else {
        cout << "Array is not sorted.\n";
    }
    //O(n)
}



//removing Duplicates

int removeDuplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n=7;
    int arr[n]={1,1,2,2,2,3,3};
    int newarr = removeDuplicates(arr,n);

    for (int i = 0; i < newarr; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


