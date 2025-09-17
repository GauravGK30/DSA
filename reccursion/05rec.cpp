#include<iostream>
#include<stack>
using namespace std;

//delete middle element
void solve(stack<int>& s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
}

void deleteMiddle(stack<int>& s,int size ){
    if(s.empty()){
        return;

    }
    int k;
    if(size%2==0){
        k=size/2;
    }else{

        k= (size/2)+1;
    } 

    solve(s,k);
}

int main(){
    stack<int > st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    deleteMiddle(st,st.size());
    
    // Print remaining stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}