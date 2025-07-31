#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:

    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};

class Sample{
    private:
    Node* head = nullptr;
    
    public:
    Sample(){
        head = nullptr;
    }

    void insert(int data){
        Node* newnode = new Node(data);

        if(head==nullptr){
            head = newnode;
        }
        else{

            Node* current = head;
            while(current->next != nullptr){
                current = current->next;
            }
            current->next = newnode;
        }
    }

    void display(){
        Node* p = head;
        while(p != nullptr){
            cout<<p->data <<"->";
            
            p = p->next;
        }
        cout<<" null"<<endl;

    }

};


int main(){
    Sample s;
    int n,data;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>data;
        s.insert(data);
    }

    s.display();
}