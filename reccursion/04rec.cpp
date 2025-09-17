#include<iostream>
#include<stack>
using namespace std;

//sort stack
void insert(stack<int>& st,int temp){
    if(st.size()==0 || st.top() <= temp){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
    return;
}

void sortedStack(stack<int>& st){
    if(st.size()==1){
        return;
    }
    int temp= st.top();
    st.pop();
    sortedStack(st);
    insert(st,temp);
    return;
}

int main(){
    stack<int> st ;
    st.push(2);
    st.push(0);
    st.push(1);
    st.push(5);

    sortedStack(st);

    // Print sorted stack (top to bottom)
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;

}