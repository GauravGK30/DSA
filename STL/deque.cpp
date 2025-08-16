#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    //double ended queue (deque) implemented as dynamic array
    // can access index in deque but not in list

    deque<int > d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.emplace_back(4);
    d.emplace_front(5);
    d.pop_back();
    d.pop_front();

    //size,erase,clear,begin ,end, rbegin, rend,
    //insert ,front, back
    for(auto val :d)
    {
        cout<<val<<" ";
    }
}