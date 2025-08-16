#include<iostream>
#include<set>
using namespace std;
//unique values,sorted order

int main(){
    set<int >s;
    // multiset<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    //count erase,find,size,empty,
    for(auto val : s)
    {
        cout<<val<<" ";
    }
    cout<<*(s.lower_bound(4))<<endl; //val should not be less than key
    cout<<*(s.upper_bound(4))<<endl;
    // upper bound--> value should br greater than key
}


//multiset sorder but not unique
//unordered set   not sorted