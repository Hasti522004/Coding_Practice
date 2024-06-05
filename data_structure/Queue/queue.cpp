#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(){
            data=0;
            next=NULL;
        }
        Node(int d){
            data = d;
            next = NULL;
        }
};
class Queue{
    public:
    Node *head;
    Queue(){
        head=NULL;
    }
    void enqueue(int data){
        Node *temp = new Node(data);
        if(head==NULL){
            head = temp;
        }
        else{
            Node *t = head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next = temp;
            temp->next = NULL;
        }
    }
    int dequeue(){
        Node *temp = head;
        if(head==NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            head = head->next;
            int val = temp->data;
            delete temp;
            cout<<val<<endl;
            return val;
        }
    }
    void printQueue(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    int i=0,choice,value;
	Queue q;
	do
	{
	    cout << "Enter 0 to exit." << endl;
	    cout << "1. enqueue()" << endl;
	    cout << "2. dequeue()" << endl;
	    cout << "3. display()" << endl;
	    cout<<"Enter choice"<<endl;
	    cin>>choice;
	    switch(choice)
	    {
	        case 0:
	        	cout<<"Thank you for Running the Queue Code!!!";
	            break;
	        case 1:
	            cout << "Enter an item to enqueue in the queue" << endl;
    	      	cin >> value;
    	      	q.enqueue(value);
	            break;
	        case 2:
	            q.dequeue();
	            break;
	        case 3:
	            q.printQueue();
	            break;
	        default:
	            cout << "Enter Proper choice number " << endl;
	            break;
	    }
	}while(choice!=0);
    return 0;
}