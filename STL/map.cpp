#include<iostream>
#include<map>
using namespace std;

//key,value pair
int main(){
    map<string,int> m;
    // m[key] = value  //key sorted order print
    m["tv"] =10000;
    m["laptop"] =150000;
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.count("laptop");
    cout<<m.erase("laptop");
    //insert,emplace,count,erase,find
}