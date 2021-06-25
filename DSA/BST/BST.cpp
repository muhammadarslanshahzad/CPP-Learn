/*
 ----------------------- Day 48 ----------------------
 ----- Binary Search Trees     ----------
 --- Date: 25.06.2021---------------------------------
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

Node* insertBst(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val< root->data){
        root->left = insertBst(root->left, val);
    }
    else{
        root->right = insertBst(root->right, val);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(void){

    Node* root = NULL;
    root = insertBst(root , 5);
    insertBst(root, 1);
    insertBst(root, 3);
    insertBst(root, 4);
    insertBst(root, 2);
    insertBst(root, 7);
 
    inOrder(root);
    cout<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 * 1 2 3 4 5 7 
 * */ 