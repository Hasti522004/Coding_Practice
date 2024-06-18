#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(){
            data = 0;
            next = NULL;
        }
        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};

class Linkedlist{
    public:
    Node* head;
    Linkedlist(){
        head = NULL;
    }
    void insertathead(int data){
        Node *temp = new Node(data);
        if(head == NULL){
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }
    void insertatTail(Node* &tail,int data){
        Node *temp = new Node(data);
        if(tail == NULL){
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    Linkedlist l1;
    l1.insertathead(0);
    l1.insertathead(1);

    l1.print();
}