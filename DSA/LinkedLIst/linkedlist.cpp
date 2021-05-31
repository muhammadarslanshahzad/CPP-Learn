/*
 ----------------------- Day 22 ----------------------
 ----- Vector     ----------
 --- Date: 30.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

//node structure
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

//inserting
void insertAtTail (node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=n;
}

//display
void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//deletion

void deleteAtHead(node * &head){
    node * deletehead = head;
    head = head->next;
    delete deletehead;
}

void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node * temp = head;
    while( temp->next->data != val){
        temp=temp->next;
    }
    node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
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
    insertAtTail(head, 8);
    insertAtTail(head, 9);

    display(head);
    
    deletion(head, 9);
    deletion(head, 1);
    deletion(head, 8);

    display(head);
    
    return 0;
}

/**
 * Sample Output 
 * 
 * 
 * 
 * */ 