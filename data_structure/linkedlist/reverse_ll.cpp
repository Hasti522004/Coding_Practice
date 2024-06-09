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
        Node(int n){
            data = n;
            next = NULL;
        }
};
void insertAtHead(Node* &head,Node* &tail,int data){
    Node *temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
    }else{
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node *temp = new Node(data);
    if(head == NULL || tail == NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    Node *temp = head;
    if(pos == 0){
        insertAtHead(head,tail,data);
        return;
    }
    if(temp->next == NULL){
        insertAtTail(head,tail,data);
        return;
    }
    int count = 0;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteNode(Node* &head,Node* &tail,int pos){
    Node *temp = head;
    if(pos == 0){
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }else{
        int count = 0;
        while(count<pos-1){
            temp = temp->next;
            count++;
        }
        Node *curr = temp->next;
        if(curr->next == NULL){
            tail = temp;
        }
        temp->next = curr->next;
        curr = NULL;
        delete curr;
    }
}
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void search(Node *head,int d){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        if(temp->data == d){
            cout<<d<<" is at Position "<<count<<endl;
           
        }
        temp = temp->next;
        count++;
    }
}

void reversell(Node* &head){

    if(head == NULL || head->next==NULL){
        return;
    }
    Node* prev = head;
    Node* curr = head->next;
    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head->next = NULL;
    head = prev;
}

Node* reverseRecursive(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *newHead = reverseRecursive(head->next);
    head->next->next =head;
    head->next = NULL;

    return newHead;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,50);
    insertAtPosition(head,tail,40,2);
    print(head);
    // reversell(head);
    // print(head);
    cout<<endl;
    Node *newHead = reverseRecursive(head);
    print(newHead);
    
    return 0;
}