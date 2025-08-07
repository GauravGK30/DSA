#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class doublyList{
    Node* head;
    Node* tail;

    public:
        doublyList(){
            head = tail =NULL;
        }

    void push_front(int val){
        Node* newNode = new Node(val);
        
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode -> prev = tail;
            tail->next = newNode;
            tail = newNode;
        }       
    }

    void pop_front(){

        if(head == NULL){
            cout<<"LL is empty \n";
            return;
        }
        Node* temp =head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty \n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            tail ->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void display(){
        Node* temp = head;

        cout<<"\nNULL";
        while(temp != NULL){
            cout<<" <=> "<<temp->data<<" <=> ";
            temp = temp->next;
        }
        cout<<" NULL\n";
    }
};

int main(){
    doublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.push_back(5);
    // dll.push_back(6);
    // dll.pop_front();
    // dll.pop_front();
    dll.pop_back();

    dll.display();

}