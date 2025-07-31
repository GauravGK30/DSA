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

    void insertAtBegin(int data){
        Node* newnode = new Node(data);
        if(head==nullptr){
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;

        }
    }

    void insertAtEnd(int data){
        Node* newnode = new Node(data);
        if(head==nullptr){
            head=newnode;
        }
        Node* current = head;
        while(current->next !=nullptr) {
            current = current->next;
        }   
        current->next = newnode;
    }

    void insertAtMiddle(int data){
        Node* newnode = new Node(data);
        if(head==nullptr){
            head=newnode;
        }
        Node* slow = head;
        Node* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            }

        newnode->next = slow->next;
        slow->next = newnode;


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
    // int n,data;
    // cin>>n;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    s.insertAtBegin(40);
    s.insertAtBegin(45);
    s.insertAtBegin(50);

    s.insertAtEnd(60);
    s.insertAtEnd(70);
    s.insertAtEnd(80);
    s.insertAtEnd(85);
    s.insertAtEnd(88);
    s.insertAtMiddle(67);
    s.insertAtMiddle(69);
    

    // for(int i=0;i<n;i++){
    //     cin>>data;
    //     s.insert(data);
    // }

    s.display();
}