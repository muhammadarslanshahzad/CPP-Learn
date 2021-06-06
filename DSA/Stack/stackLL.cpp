/*
 ----------------------- Day 29 ----------------------
 ----- Stack using  LinkedList    ----------
 --- Date: 06.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* link;
        Node(){
            data=0;
            link=NULL;
        }
};

Node * top;

void push(int val){
    Node* temp;
    temp=new Node();

    if(!temp){
        cout<<"Stack overflow"<<endl;
        exit(1);
    }

    temp->data=val;
    temp->link=top;
    top=temp;
}

bool isEmpty(){
    return top==NULL;
}

Node* Top(){
    if(isEmpty()){
        exit(1);
    }
    else{
        return top;
    }
}

void pop(){
    Node * temp;
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }

    temp=top;
    top=top->link;
    temp->link=NULL;

    delete[] temp;

}


void display(){
    Node * temp;
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }

    temp =top;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}

int main(void){

    push(10);
    push(11);
    push(100);
    push(190);
    push(110);
    push(20);

    isEmpty();
    display();

    pop();
    pop();
    pop();

    display();
    return 0;
}

/**
 * Sample Output 
 * 
 *  20->110->190->100->11->10->NULL
    100->11->10->NULL
 * 
 * */ 