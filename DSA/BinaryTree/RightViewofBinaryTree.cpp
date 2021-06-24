/*
 ----------------------- Day 47 ----------------------
 ----- Right View of Binary Trees     ----------
 --- Date: 24.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

void rightView(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for(int i=0; i<n; i++){
            Node* curr = q.front();
            q.pop();

            if(i == n-1){
                cout<<curr->data << " ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }

            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}


void leftView(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for(int i=1; i<=n; i++){
            Node* curr = q.front();
            q.pop();

            if(i == 1){
                cout<<curr->data << " ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }

            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}
int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<"Right View of Binary Tree: ";
    rightView(root);
    cout<<"\nLeft View of Binary Tree: ";
    leftView(root);

    return 0;
}

/**
 * Sample Output 
 * 
 *  Right View of Binary Tree: 1 3 7 
 *  Left View of Binary Tree: 1 2 4
 * */ 