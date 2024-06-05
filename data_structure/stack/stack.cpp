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
        Node(int i){
            data = i;
            next = NULL;
        }
};
//stack same as insert at head in linkedlist and delete at head = stack
class Stack{
    public:
        Node *tos;
        Stack(){
            tos = NULL;
        }
        void push(int data){
            Node *temp = new Node(data);
            if(tos == NULL){
                tos = temp;
            }else{
                temp->next = tos;
                tos = temp;
            }
        }
        int pop(){
            if(tos==NULL){
                cout<<"Stack is Empty"<<endl;
                return -1;
            }else{
                Node *t = tos;
                int value = t->data;
                tos = tos->next;
                t->next = NULL;
                delete t;
                return value;
            }
        }
        void printStack(){
            if(tos == NULL){
                cout<<"Stack is Empty"<<endl;
            }else{
                Node *t = tos;
                while(t!=NULL){
                    cout<<t->data<<endl;
                    t= t->next;
                }
            }
        }
        int sizeOfStack(){
            int count = 0;
            Node* t = tos;
            while(t!=NULL){
                count++;
                t = t->next;
            }
            return count;
        }
        bool empty(){
            if(tos==NULL){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
    int i=0,choice,value;
	Stack s;
	do
	{
	    cout << "Enter 0 to exit." << endl;
	    cout << "1. Push()" << endl;
	    cout << "2. Pop()" << endl;
	    cout << "3. display()" << endl;
	    cout << "4. Length of Stack" << endl;
	    cout << "5. Stack is empty or not? " << endl;
	    cout<<"Enter choice"<<endl;
	    cin>>choice;
	    switch(choice)
	    {
	        case 0:
	            break;
	        case 1:
	            cout << "Enter an item to push in the stack" << endl;
    	      	cin >> value;
    	      	s.push(value);
	            break;
	        case 2:
	            	if((i=s.pop())!=-1)
                	{
                		cout<<endl<<i<<" is poped."<<endl;
                	}
	            break;
	        case 3:
	            s.printStack();
	            break;
	        case 4:
				cout<<s.sizeOfStack()<<endl;
				break;
			case 5:
				cout<<s.empty()<<endl;
                break;
	        default:
	            cout << "Enter Proper choice number " << endl;
	            break;
	    }
	}while(choice!=0);
	return 0;
}