/*
 ----------------------- Day 25 ----------------------
 ----- Doubly LinkedList    ----------
 --- Date: 02.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * pre;
        node* nxt;

        node(int val){
            data=val;
            pre=NULL;
            nxt=NULL;
        }
};

void insertAtHead(node* &head, int val){
    node * n = new node(val);
    n->nxt= head;

    if(head != NULL){
        head->pre=n;          
    }

    head = n ;
}

void insertAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return ;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->nxt!=NULL){
        temp =temp->nxt;
    }
    temp->nxt=n;
    n->pre=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->nxt;
    }
    cout<<"NULL"<<endl;
}
int main(void){

    node * head =NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);


    return 0;
}

/**
 * Sample Output 
 * 
 *  1->2->3->4->NULL
 *  5->1->2->3->4->NUL
 * 
 * 
 * */ 