#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    
    //double linked list
    list<int> li = {1,2,3};
    // li.push_back(1);
    // li.push_back(2);
    // li.push_back(3);
    // li.push_front(4);
    // li.push_front(5);

    // li.pop_back();
    // li.pop_front();
    for(auto val : li)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<li.size()<<endl;

    cout<<li.empty()<<endl;
}