#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    // pair<int,int> p;
    // pair<string,pair<int, int>> p1 = {"gk",{12,33}};

    // cout<<p1.first<<endl;
    // cout<<p1.second.first<<endl;
    // cout<<p1.second.second<<endl;

    vector<pair<int,int>> vec ={{1,2},{3,4},{4,5}};
    vec.push_back({5,6}); //insert
    vec.emplace_back(9,8); //in place objects create

    for( auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}