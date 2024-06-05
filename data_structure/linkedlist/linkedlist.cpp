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

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,30);
    insertAtPosition(head,tail,40,2);
    deleteNode(head,tail,1);
    deleteNode(head,tail,3);
    search(head,40);
    print(head);
    // Node n1(10);
    // Node n2(20);
    // Node n3(30);
    // Node n4(40);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // cout<<n1.data<<endl<<n1.next->data<<endl<<n1.next->next->data;
    
    // int choice;
    // do
    // {
    //     cout<<"Enter your choice : "<<endl;
	//     cout<<"Enter 1 for insert at head : "<<endl;
	//     cout<<"Enter 2 for insert at tail : "<<endl;
	//     cout<<"Enter 3 for insert at any position : "<<endl;
	//     cout<<"Enter 4 for linear Search(Index Sequential) : "<<endl;
    //     cout<<"Enter s for Interpolation Search : "<<endl;
	//     cout<<"Enter 6 for Print : "<<endl;
	//     cout<<"Enter 7 for Exit : "<<endl;
    //     cin>>choice;
    //     switch(choice){
    //         case 1:
    //             cout<<"Enter Number ";
    //             break;
    //         case 2:
    //             choice = -1;
    //             break;
    //         default:
    //             cout<<"Enter valid choice ."<<endl;
    //     }
    // } while (choice!=-1);
    
    return 0;
}