#include<iostream>
#include<vector>
using namespace std;;

int main(){
    vector<int> v;
    // cout<<v.size()<<endl;;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    v.emplace_back(6); //similar to push back but emplace at last 
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    for(auto var : v)
    {
        cout<<var<<" ";
    }

    cout<<"\n value at index 2 "<<v[2]<<" or "<<v.at(2)<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    vector<int> v1 = {1,2,4,5,6,67};
    cout<<"back "<<v1.back()<<endl;


    vector<int > vec(3,10); //size 3,element 10,10,10 DP
    // for(auto var : vec)
    // {
    //     cout<<var;
    // }

    vector<int > vec2(vec);
    for(auto var : vec2)
    {
        cout<<var<<" ";
    }
    cout<<endl;
    //O(1) for all above


    // O(n) below
    // v1.erase(v1.begin()+2); //3rd index

    // v1.erase(v1.begin()+1 , v1.begin()+3);  

    v1.insert(v1.begin()+2,100);
    //erase change size but not capacity
    // v1.clear();
    //clear the whole vector but capacity same
    for(auto var : v1)
    {
        cout<<var<<" ";

    }
    // cout<<v1.size()<<endl;
    // cout<<v1.capacity()<<endl;
    // cout<<v1.empty();

    cout<<endl;
    // cout<<*(v1.begin())<<endl;
    // cout<<*(v1.rbegin())<<endl;
    // cout<<*(v1.end())<<endl;
    // cout<<*(v1.rend())<<endl;

    //iterator
    // vector<int> :: iterator it; change with auto
    for(auto it=v1.begin(); it != v1.end(); it++){
        cout<<*(it)<<" ";
    }
    //reverse
    vector<int> :: reverse_iterator rit;
    for(rit=v1.rbegin(); rit != v1.rend(); rit++){
        cout<<*(rit)<<" ";
    }



}
