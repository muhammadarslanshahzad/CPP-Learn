/*
 ----------------------- Day 50----------------------
 ----- Delete in Binary Search Trees     ----------
 --- Date: 27.06.2021---------------------------------
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

Node* inorderSuccess(Node* root){
    Node* curr = root;
    while( curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

//Delete in BST
Node* deleteBST(Node* root , int key){
    
    if(key < root->data){
        root->left = deleteBST(root->left, key);
    }

    else if(key > root->data){
        root->right = deleteBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);

            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);

            return temp;
        }

        Node* temp = inorderSuccess(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);   

    inorder(root);
    root = deleteBST(root, 5);
    inorder(root);
    return 0;
}

/**
 * Sample Output 
 * 
 * 1 2 3 4 5 7 
 * */ 