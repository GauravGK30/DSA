#include<bits/stdc++.h>
using namespace std;
//spiral matrix

// vector<int> spiralMatrix(vector<vector<int>>&mat){
//     int n = mat.size();
//     int m = mat[0].size();
// };

int main(){
    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int a = arr.size();
    int b = arr[0].size();
    int left =0,right= b-1;
    int top=0,bottom= a-1;

    vector<int>ans;
    while (top <= bottom && left <= right) {
        
        for(int i=left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        
        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        
        for(int i=right;i>=left;i--){
            ans.push_back(arr[bottom][i]);
        }
        bottom--;
        
        for(int i=bottom;i>=top;i--){
            ans.push_back(arr[i][left]);
        }
        left++;
    }
    int sum=0;
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : ans) {
        sum+= num;
        cout<<"currentSum-->"<<sum<<endl;
    }
    cout << endl;
    cout<<sum;
    return 0;
}