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

class CircularLL{
    Node* head;
    Node* tail;

    public:
    CircularLL(){
        head = tail = NULL;
    }

    void InsertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode -> next = head;
            head = newNode;
            tail ->next =head;
        }
    }
    void InsertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next =head;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        if(head == NULL) return;
        else if(head ==tail){ //single Node
            delete head;
            head = tail =NULL;
        }else{

            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        } 
    }
    void deleteAtTail(){
        if(head == NULL) return;
        else if(head ==tail){ //single Node
            delete head;
            head = tail =NULL;
        }else{

            Node* temp = tail ;
            Node* prev = head;
            while(prev->next != tail){
                prev =prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        } 
    }

    void display(){
        if(head == NULL) return;

        cout<<head->data <<" ->";
        Node* temp = head->next;
        while(temp != head){
            cout<<temp->data<<" ->";
            temp = temp->next;
        }
        cout<<temp->data <<endl;
    }
};

int main(){
    CircularLL cll;
    cll.InsertAtHead(3);
    cll.InsertAtHead(2);
    cll.InsertAtHead(1);

    cll.InsertAtTail(4);
    cll.InsertAtTail(5);
    cll.deleteAtHead();
    cll.display();
    cll.deleteAtTail();
    cll.display();
}