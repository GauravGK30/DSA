//missing num
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int n= nums.size();
    int total= n*(n+1)/2;
    int sum= 0;

    for(int num : nums){
        sum += num;
    }
    return total-sum;
}

int main() {
    vector<int> nums = {3, 5, 1,2,4};
    cout << "Missing number is: " << missingNumber(nums) << endl;
    return 0;
}