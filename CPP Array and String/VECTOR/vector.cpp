// vector:-
// vector<int>vec;
// 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={5,0};
    cout<< vec[0]<<endl;
    return 0;

    for(int i:vec){
        cout<<i<<endl;
    }
}