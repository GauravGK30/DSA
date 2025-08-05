#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

//linked list main fun
class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        // Node newNode(val); //static 

        if(head ==  NULL){
            head = tail = newNode;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode; 
        }else{
            tail-> next = newNode;
            tail = newNode;
        }
    }


    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty \n";
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty \n";
            return;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    void insertAtMiddle(int val,int pos){
        if(pos < 0){
            cout<<"invalid pos \n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0;i<pos-1 ;i++){
            if(temp == NULL){
                cout<<"invalid\n";
                return;
            }
            temp = temp->next;
            
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next =newNode;
    }

    int search(int key){
        Node* temp =head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }else{
                temp = temp->next;
                idx++;
            }
        }
        return -1;
    }

    void display(){
        Node* temp = head;

        while( temp != NULL){
            cout<< temp->data<< "->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

//head = Node*
int main(){
    List ll;
    // ll.push_front(1);
    // ll.push_front(2);
    // ll.push_front(3); //3->2->1->null;

    // ll.push_back(4);
    // ll.push_back(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.insertAtMiddle(5,2);
    ll.display();    

    cout<<ll.search(2)<<endl;
    cout<<ll.search(4)<<endl;
    return 0;
}