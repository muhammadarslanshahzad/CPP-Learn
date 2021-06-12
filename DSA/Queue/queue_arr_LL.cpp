/*
 ----------------------- Day 35 ----------------------
 ----- Queue using LinkedList    ----------
 --- Date: 12.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
        }
};

class Queue{
    public:
        Node* front;
        Node* back;

        Queue(){
            front=NULL;
            back=NULL;
        }

        void push(int x){
            Node* n=new Node(x);

            if(front==NULL){
                back=n;
                front=n;
                return;
            }
            back->next=n;
            back=n;
        }

        void pop(){
            if(front == NULL){
                cout<<"Underflow! No element present in queue."<<endl;
                return;
            }

            Node * toDelete= front;
            front=front->next;

            delete[] toDelete;
        }

        int peek(){
            if(front == NULL){
                cout<<"Underflow! No element present in queue."<<endl;
                return -1;
            }

            return front->data;
        }

        bool empty(){
            if(front == NULL){
                return true;
            }
            return false;
        }
};


int main(void){

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 *  1
    2
    3
    4
    Underflow! No element present in queue.
    -1
    1
 * 
 * */ 