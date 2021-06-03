/*
 ----------------------- Day 26 ----------------------
 ----- Kappend in LinkedList    ----------
 --- Date: 03.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *nxt;

        node(int val){
            data=val;
            nxt=NULL;
        }
};

void insertAtTail(node *head, int val){
      node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->nxt != NULL){
        temp = temp->nxt;
    }
    temp->nxt=n;

}


int length( node *head){
    int l=0;
    node* temp=head;

    while(temp!=NULL){
        l++;
        temp= temp->nxt;
    }
    return l;
}

node* kappend(node* &head, int k){
    node * newhead;
    node* newtail;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int  count=1;
    while(tail->nxt != NULL) {
        if(count==l-k){
            newtail=tail;
        }
        if(count=l-k+1){
            newhead=tail;
        }
        tail= tail->nxt;
        count++;
    }   

    newtail->nxt=NULL;
    tail->nxt=head;

    return newhead; 
}


void display(node * head){
    node *temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->nxt;
    }
    cout<<"NULL"<<endl;
}

int main(void){

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,15);
    insertAtTail(head,112);
    insertAtTail(head,9);
    insertAtTail(head,6);
    insertAtTail(head,78);

    display(head);

    node* newhead = kappend(head, 3);
    display(newhead);

    return 0;
}

/**
 * Sample Output 
 * 
 *  
 * 
 * */ 