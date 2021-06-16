/*
 ----------------------- Day 39 ----------------------
 ----- Binary Trees Traversal    ----------
 --- Date: 16.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}


void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    cout<<root->data<<" ";
    postorder(root->right);
    
}
int main(void){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    preorder(root);
    cout<<endl<<endl;
    postorder(root);
    cout<<endl<<endl;
    inorder(root);


    return 0;
}

/**
 * Sample Output 
 * 
 *  1 2 4 5 3  
 *  4 5 2 3 1
 *  4 5 2 1 3 
 * 
 * 
 * */ 