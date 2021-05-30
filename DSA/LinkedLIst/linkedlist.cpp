/*
 ----------------------- Day 22 ----------------------
 ----- Vector     ----------
 --- Date: 30.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;
        //constructor
        node(int val){
            data=val;
            next=NULL;
        }
    private:
};

void insertAtTail (node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


}

int main(void){

    node * head =NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);

    display(head);
    
    return 0;
}

/**
 * Sample Output 
 * 
 * 
 * 
 * */ 