#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//push,emplace,top,pop,size,empty
int main(){
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> pqq; //reverse

    pqq.push(2);
    pqq.push(10);
    pqq.push(4);
    cout<<pqq.top();

    // push,pop O(logn);

}