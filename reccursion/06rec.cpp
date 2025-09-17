#include<iostream>
#include<stack>
using namespace std;

//reverse a stack
void insert(stack<int>& s,int ele){

    if(s.empty()){
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);

}

void reverse(stack<int >& s)
{
    if(s.empty()){
        return;
    }
    
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s,temp);

}

int main(){
    stack<int > st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    // st.push(7);

    cout<<" reverse: "<<endl;

    reverse(st);
    // Print remaining stack
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}