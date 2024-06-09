#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(){
            data = 0;
            next =NULL;
        }
        Node(int d){
            data = d;
            next = NULL;
        }
};
class Queue{
    public:
        Node *front;
        Node *rear;
        Queue(){
            front = NULL;
            rear = NULL;
        }
        void enqueue(int d){
            Node *temp = new Node(d);
            if(front == NULL){
                front = temp;
                rear = temp;
            }else{
                rear->next = temp;
                rear = temp;
            }
        }
        void dequeue(){
        
        }
};
int main(){
    Queue q;

    return 0;
}